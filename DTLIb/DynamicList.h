// DynamicList.H
// Created by herryao on 4/11/24.
//

#ifndef DTLIB_DYNAMICLIST_H
#define DTLIB_DYNAMICLIST_H
#include "SeqList.h"
#include "Exception.h"

namespace DTLib
{
	template <typename T>
	class DynamicList: public SeqList<T>
	{
	protected:
		int m_capacity;
	public:
		DynamicList(int capacity);
		[[nodiscard]] int capacity() const;
		void resize(int capacity);
		~DynamicList();
	};

	template<typename T>
	DynamicList<T>::~DynamicList() {
		if(this->m_array)
		{
			delete [] this->m_array;
			this->m_capacity = this->m_length = 0;
		}

	}

	template<typename T>
	void DynamicList<T>::resize(int capacity) {
		if(capacity != this->m_capacity)
		{
			int length = capacity > this->m_length ? this->m_length : capacity;
			T* array = new T[capacity];
			if(array)
			{
				for(int i=0; i<length; ++i)
				{
					array[i] = this->m_array[i];
				}
				T* temp = this->m_array;
				this->m_array = array;
				this->m_length = length;
				this->m_capacity = capacity;
				//delete放在最后的原因是为了防止元素调用析构函数激发异常抛出，在异常被抛出时不会影响对象内的成员赋值。
				delete []temp;
			}
			else
			{
				THROW_EXCEPTION(NoEnoughMemoryException, "No memory to resize DynamicList object...");
			}
		}
	}

	template<typename T>
	int DynamicList<T>::capacity() const {
		return this->m_capacity;
	}

	template<typename T>
	DynamicList<T>::DynamicList(int capacity) {
		this->m_array = new T[capacity];
		if(this->m_array)
		{
			this->m_capacity = capacity;
			this->m_length = 0;
		}
		else
			THROW_EXCEPTION(NoEnoughMemoryException, "No memory to create DynamicList object ...");
	}
}


#endif //DTLIB_DYNAMICLIST_H
