/**
  ******************************************************************************
  * @file           : StaticArray.h
  * @author         : herryao
  * @brief          : None
  * @email          : stevenyao@g.skku.edu
  * @date           : 4/13/24
  ******************************************************************************
  */

#ifndef DTLIB_STATICARRAY_H
#define DTLIB_STATICARRAY_H
#include "Array.h"

namespace DTLib
{
	template<typename T, int N>
	class StaticArray: public Array<T>
	{
	protected:
		T m_space[N];

	public:
		//constructor
		StaticArray()	//O(1)
		{
			this->m_array = this->m_space;
		}
		//copy constructor
		StaticArray(const StaticArray<T, N>& obj)	//O(n)
		{
			this->m_array = this->m_space;
			for(int i=0; i<N; ++i)
			{
				this->m_space[i] = obj.m_space[i];
			}
		}
		//copy assign
		StaticArray<T, N>& operator = (const StaticArray<T, N> & obj)	//O(n)
		{
			if(this != &obj)
			{
				for(int i=0; i<N; ++i)
				{
					this->m_space[i] = obj.m_space[i];
				}
			}
			return *this;
		}
		int length() const	//O(1)
		{
			return N;
		}
	};
}
#endif //DTLIB_STATICARRAY_H
