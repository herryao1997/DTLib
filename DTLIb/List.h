/*
 * LIST_H
 * Created by herryao on 4/11/24.
 * Email: stevenyao@g.skku.edu
 * Sungkyunkwan Univ. Nano Particle Technology Lab(NPTL)
 *
 */

#ifndef DTLIB_LIST_H
#define DTLIB_LIST_H

#include "Object.h"
#include "Exception.h"
namespace DTLib {

	template<typename T>
	class List :public Object
	{
	protected:
		//禁用拷贝构造和拷贝赋值操作
		List(const List& other);
		List& operator=(const List& other);
	public:
		List() = default;
		virtual bool insert(const T& e) = 0;
		virtual bool insert(int i, const T& e) = 0;
		virtual bool remove(int i) = 0;
		virtual bool set(int i, const T& e) = 0;
		virtual bool get(int i, T& e) const = 0;
		virtual int length() const  = 0;
		virtual void clear() = 0;
		//查找函数
		virtual int find(const T& e) const= 0;
	};

} // namespace DTLib

#endif // DTLIB_LIST_H
