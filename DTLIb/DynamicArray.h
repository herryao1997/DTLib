/**
  ******************************************************************************
  * @file           : DynamicArray.h
  * @author         : herryao
  * @brief          : None
  * @email          : stevenyao@g.skku.edu
  * @date           : 4/13/24
  ******************************************************************************
  */

#ifndef DTLIB_DYNAMICARRAY_H
#define DTLIB_DYNAMICARRAY_H
#include "Array.h"
namespace DTLib
{
	template<typename T>
	class DynamicArray: public Array<T>
	{
	protected:
		int m_length;

		T* copy(T* array, int len, int newlen)
		{
			T* ret = new T[newlen];
			if(ret != nullptr)
			{
				int size = len < newlen ? len : newlen;
				for(int i=0; i<size; ++i)
				{
					ret[i] = array[i];
				}
			}
			else
			{
				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in copy operation of DynamicArray...");
			}
			return ret;
		}

		void init(T* array, int length)
		{
			if(array != nullptr)
			{
				this->m_array = array;
				this->m_length = length;
			}
			else
			{
				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in construction of DynamicArray...");
			}
		}

		void update(T* array, int length)
		{
			if(array != nullptr)
			{
				T* temp = this->m_array;

				this->m_length = length;
				this->m_array = array;

				delete []temp;
			}
			else
			{
				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in construction of DynamicArray...");
			}
		}
	public:
		DynamicArray(int length);
		DynamicArray(const DynamicArray<T>& obj);
		DynamicArray<T>& operator =(const DynamicArray<T>& obj);
		int length() const;
		void resize(int length);
		~DynamicArray();
	};

	template<typename T>
	DynamicArray<T>::~DynamicArray()
	{
		if(this->m_array != nullptr)
		{
			delete []this->m_array;
			this->m_array = nullptr;
			this->m_length = 0;
		}
	}

	template<typename T>
	void DynamicArray<T>::resize(int length)
	{
		update(copy(this->m_array, this->length(), length),length);
	}

	template<typename T>
	int DynamicArray<T>::length() const
	{
		return this->m_length;
	}

	template<typename T>
	DynamicArray<T> &DynamicArray<T>::operator=(const DynamicArray<T>& obj) {
		if(this != &obj)
		{
			update(copy(obj.m_array, obj.length(), obj.length()), obj.length());
		}

		return *this;
	}

	template<typename T>
	DynamicArray<T>::DynamicArray(const DynamicArray<T> &obj)
	{
		init(copy(obj.m_array, obj.length(), obj.length()), length());
	}

	template<typename T>
	DynamicArray<T>::DynamicArray(int length)
	{
		init(new T[length], length);
	}
}


#endif //DTLIB_DYNAMICARRAY_H
