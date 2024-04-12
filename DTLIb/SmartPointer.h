// namespace DTLib
// SmartPointer.h
// Created by herryao on 4/4/24.
//

#ifndef DTLIB_SMARTPOINTER_H
#define DTLIB_SMARTPOINTER_H

#include "Object.h"

namespace DTLib
{

	template<typename T>
	class SmartPointer : public Object
	{
	protected:
		T* m_pointer;
	public:
		SmartPointer(T* p = nullptr)
		{
			this->m_pointer = p;
		}
		T operator*()
		{
			return *(this->m_pointer);
		}
		T* operator->()
		{
			return this->m_pointer;
		}
		bool isNull()
		{
			return (this->m_pointer == nullptr);
		}
		T* get()
		{
			return this->m_pointer;
		}
		~SmartPointer()
		{
			delete this->m_pointer;
		}
		SmartPointer(const SmartPointer<T>& obj)
		{
			//unique pointer
			this->m_pointer = obj.m_pointer;
			//const_cast to make it mutable
			const_cast<SmartPointer<T>&> (obj).m_pointer = nullptr;
		}

		SmartPointer<T>& operator=(const SmartPointer<T>& obj)
		{
			if(&obj != this)
			{
				//free the current pointing memory
				delete this->m_pointer;
				this->m_pointer = obj.m_pointer;
				const_cast<SmartPointer<T>&>(obj).m_pointer = nullptr;
			}
			//achieving the sequential assignment
			return *this;
		}
	};

}

#endif //DTLIB_SMARTPOINTER_H
