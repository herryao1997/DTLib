/**
  ******************************************************************************
  * @file           : Array.h
  * @author         : herryao
  * @brief          : None
  * @attention      : None
  * @date           : 4/13/24
  ******************************************************************************
  */



#ifndef DTLIB_ARRAY_H
#define DTLIB_ARRAY_H
#include "Object.h"
#include "Exception.h"

namespace DTLib
{
	template <typename T>
	class Array: public Object
	{
	protected:
		T* m_array;
	public:
		virtual bool set(int i, const T& e);
		virtual bool get(int i, T& e) const;
		virtual int length() const = 0;

		T operator[] (int i) const;
		T& operator[] (int i);
	};


	template <typename T>
	bool Array<T>::set(int i, const T& e)	//o(1)
	{
		bool ret = ((i >= 0) && (i < this->length()));
		if(ret)
		{
			this->m_array[i] = e;
		}
		return ret;
	}

	template<typename T>
	bool Array<T>::get(int i, T &e) const	//o(1)
	{
		bool ret = ((i >= 0) && (i < this->length()));
		if(ret)
		{
			e = this->m_array[i];
		}
		return ret;
	}

	template<typename T>
	T& Array<T>::operator [](int i)	//o(1)
	{
		bool ret = ((i >= 0) && (i < this->length()));
		if(ret)
		{
			return this->m_array[i];
		}
		else
		{
			THROW_EXCEPTION(IndexOutOfBoundsException, "failed in access the array element using index ...");
		}
	}

	template<typename T>
	T Array<T>::operator [](int i) const	//o(1)
	{
		//for simplicity
//		bool ret = ((i >= 0) && (i < this->length()));
//		if(ret)
//		{
//			return this->m_array[i];
//		}
//		else
//		{
//			THROW_EXCEPTION(IndexOutOfBoundsException, "failed in access the array element using index ...");
//		}
		return (const_cast<Array<T>&>(*this))[i];
	}


}




#endif //DTLIB_ARRAY_H
