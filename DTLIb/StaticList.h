//
// StaticList.H
// Created by herryao on 4/11/24.
//

#ifndef DTLIB_STATICLIST_H
#define DTLIB_STATICLIST_H
#include "SeqList.h"

namespace DTLib
{
	template<typename T, int N>
	class StaticList: public SeqList<T>
	{
	protected:
		T m_space[N];
	public:
		StaticList();
		int capacity() const;
	};

	template<typename T, int N>
	int StaticList<T, N>::capacity() const {
		return N;
	}

	template<typename T, int N>
	StaticList<T, N>::StaticList() {
		this->m_array = this->m_space;
		this->m_length = 0;
	}
}
#endif //DTLIB_STATICLIST_H
