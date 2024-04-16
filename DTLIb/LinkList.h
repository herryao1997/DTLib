/**
  ******************************************************************************
  * @file           : LinkList.h
  * @author         : herryao
  * @brief          : None
  * @email          : stevenyao@g.skku.edu
  * @date           : 4/16/24
  ******************************************************************************
  */

#ifndef DTLIB_LINKLIST_H
#define DTLIB_LINKLIST_H
#include "List.h"


namespace DTLib
{
	template <typename T>
	class LinkList: public List<T>
	{
	protected:
		struct Node: public Object
		{
			T value;
			Node* next;
		};
		//为了防止出现在const函数中出现类型转换的问题
//		mutable Node  m_header;
		//不再显示调用构造函数，而是采用匿名结构体构造和原来
		//Node类型对象相同的内存分布，但并不会调用T的构造函数
		//而是预留空间
		mutable struct: public Object{
			char reserved[sizeof(T)];
			Node* next;
		} m_header;
		int m_length;

		Node* position(int i) const
		{
//			Node* current =&this->m_header;
			Node* current = reinterpret_cast<Node*>(&this->m_header);
			for(int p=0; p<i; p++)
			{
				current = current->next;
			}
			return current;
		}

	public:

		LinkList()
		{
			this->m_length = 0;
			this->m_header.next = nullptr;
		}

		bool insert(const T& e)
		{
			return insert(this->m_length, e);
		}

		bool insert(int i, const T& e)
		{
			bool ret = ((i>=0)&&(i<=this->m_length));

			if(ret)
			{
				Node* node = new Node;
				if(node != nullptr)
				{
					Node* current = position(i);
					node->next = current->next;
					node->value = e;
					current->next = node;

					this->m_length++;
				}
				else
				{
					THROW_EXCEPTION(NoEnoughMemoryException,"Failed in insert LinkList...");
				}
			}
			return ret;
		}
		bool remove(int i)
		{
			int ret = ((i>=0)&&(i<this->m_length));
			ret = ret && (this->m_length > 0);
			if(ret)
			{
				Node* current = position(i);
				auto toDel = current->next;
				current->next = toDel->next;
				this->m_length--;
				delete toDel;
			}
			return ret;
		}
		bool set(int i, const T& e)
		{
			int ret = ((i>=0)&&(i<this->m_length));
			if(ret)
			{
				position(i)->next->value = e;
			}
			return ret;
		}

		T get(int i) const
		{
			T ret;
			if(get(i, ret))
			{
				return ret;
			}
			else
			{
				THROW_EXCEPTION(IndexOutOfBoundsException, "Invalid parameter used here ......");
			}
		}
		bool get(int i, T& e) const
		{
			int ret = ((i>=0)&&(i<this->m_length));
			ret = ret && (this->m_length > 0);
			if(ret)
			{
				//如果在一个const函数中获取一个成员的地址
				//如果获取地址就存在篡改常量的可能
				//被认为有可能会修改成员变量的值
				//解决方法，将相关的成员声明为mutable
				//此时编译器就会允许在一个const的函数中获取一个成员变量的地址了
				//maybe the const pointer can be changed in a const function
				//也可以使用常量的强制转换
//				Node* current = const_cast<Node*>(&this->m_header);
//				Node* current = position(i);
//				e = current->next->value;

				e = position(i)->next->value;
			}
			return ret;
		}

		int length() const
		{
			return this->m_length;
		}

		void clear()
		{

			while(this->m_header.next != nullptr)
			{
				auto toDel = this->m_header.next;
				this->m_header.next = toDel->next;
				delete toDel;
			}
			this->m_length = 0;
		}

		//destructor
		~LinkList()
		{
			clear();
		}

	};
}
#endif //DTLIB_LINKLIST_H
