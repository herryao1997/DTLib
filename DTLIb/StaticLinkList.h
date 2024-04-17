/**
  ******************************************************************************
  * @file           : StaticLinkList.h
  * @author         : herryao
  * @brief          : None
  * @email          : stevenyao@g.skku.edu
  * @date           : 4/17/24
  ******************************************************************************
  */

#ifndef DTLIB_STATICLINKLIST_H
#define DTLIB_STATICLINKLIST_H
#include "LinkList.h"

namespace DTLib
{
	template <typename T, int N>
	class StaticLinkList :public LinkList<T>
	{
	protected:
		struct SNode : public Node
		{
		public:
			//new 操作符号必须重载
			void* operator new (size_t size, void* loc)
			{
				(void)size;
				return loc;
			}
		};
		typedef typename LinkList<T>::Node Node;
		//since Node depends on the template in LinkList
		//cannot directly be used here
		//the Node need to be explicitly noted as one type
//		unsigned char* m_space[N*sizeof(Node)];
		unsigned char* m_space[N*sizeof(SNode)];
		//labeled array
		int m_used[N];


		Node* create()
		{
			Node* ret = nullptr;

			for(int i=0; i<N; ++i)
			{
				if(!m_used[i])
				{
					ret = reinterpret_cast<SNode*>(this->m_space) + i;
					ret = new(ret) SNode();
					m_used[i] = 1;
					break;
				}
			}

			return ret;
		}

		void destroy(Node* pn)
		{
			SNode* space = reinterpret_cast<SNode*>(m_space);
			SNode* psn = dynamic_cast<SNode*> pn;
			for(int i=0; i<N; ++i)
			{
				if(pn == (space + i))
				{
					this->m_used = 0;
					pn->~SNode();
				}
			}
		}

	public:
		StaticLinkList()
		{
			for(int i=0; i<N; ++i)
			{
				m_used[i] = 0;
			}
		}

		int capacity() const
		{
			return N;
		}

	};

}
#endif //DTLIB_STATICLINKLIST_H
