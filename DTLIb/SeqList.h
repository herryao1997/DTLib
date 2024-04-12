/*
 * SeqList.H
 * Created by herryao on 4/11/24.
 * Email: stevenyao@g.skku.edu
 * Sungkyunkwan Univ. Nano Particle Technology Lab(NPTL)
 */

#ifndef DTLIB_SEQLIST_H
#define DTLIB_SEQLIST_H

#include "List.h"

namespace DTLib
{
	template<typename T>
	class SeqList: public List<T>
	{
	protected:
		int m_length;
		T* m_array;

	public:
		bool insert(int i, const T& e);

		bool insert(const T& e);

		bool remove(int i);

		bool get(int i, T& e) const;

		bool set(int i, const T& e);


		[[nodiscard]] int length() const;

		T& operator[](int i);

		T operator[](int i) const;

		void clear();
		virtual int capacity() const = 0;
	};

	template<typename T>
	bool SeqList<T>::insert(const T &e) {
		return insert(this->m_length, e);
	}

	template<typename T>
	void SeqList<T>::clear() {
		this->m_length = 0;
	}

	template<typename T>
	T SeqList<T>::operator[](int i) const {
		//excluding repetitive coding
		return (const_cast<SeqList<T&>> (*this))[i];
	}

	template<typename T>
	T &SeqList<T>::operator[](int i) {
		if((i>=0)&&(i<this->m_length))
		{
			return this->m_array[i];
		}
		THROW_EXCEPTION(IndexOutOfBoundsException, "Parameter i is invalid ...");
	}

	template<typename T>
	int SeqList<T>::length() const {
		return this->m_length;
	}

	template<typename T>
	bool SeqList<T>::set(int i, const T &e) {
		bool ret = ((i>=0)&&(i<this->m_length));
		if(ret)
		{
			this->m_array[i] = e;
		}
		return ret;
	}

	template<typename T>
	bool SeqList<T>::get(int i, T &e) const {
		bool ret = ((i>=0)&&(i<this->m_length));
		if(ret)
		{
			e = this->m_array[i];
		}
		return ret;
	}

	template<typename T>
	bool SeqList<T>::remove(int i) {
		bool ret = ((i>=0)&&(i<this->m_length));
		if(ret)
		{
			for(int p=i; p<this->m_length-1; p++)
			{
				this->m_array[p] = this->m_array[p+1];
			}
			this->m_length--;
		}
		return ret;
	}

	template<typename T>
	bool SeqList<T>::insert(int i, const T &e) {
		bool ret = ((0 <= i)&&(i<=this->m_length));
		ret  = ret && (this->m_length + 1 <= this->capacity());
		if(ret)
		{
			for(int p=this->m_length-1; p>=i; p--)
			{
				this->m_array[p+1] = this->m_array[p];
			}
			this->m_length++;
			this->m_array[i] = e;
		}
		return ret;
	}
}

#endif //DTLIB_SEQLIST_H
