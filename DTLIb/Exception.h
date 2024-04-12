//
// DTLIB_EXCEPTION_H
// Created by herryao on 4/4/24.
//

#ifndef DTLIB_EXCEPTION_H
#define DTLIB_EXCEPTION_H
#include "Object.h"

//使用宏定义来简化代码
//不需要重复写出文件名和行号
#define THROW_EXCEPTION(e, m) (throw e(m, __FILE__, __LINE__))

namespace DTLib
{
	class Exception : public Object
	{
	protected:
		char* m_message;
		char* m_location;

		void init(const char* message, const char* file, int line);
	public:
		//构造函数
		Exception(const char* message);
		Exception(const char* file, int line);
		Exception(const char* message, const char* file, int line);

		//拷贝构造和拷贝赋值
		Exception(const Exception& e);
		Exception& operator= (const Exception& e);

		//返回当前信息，异常抛出地址
		virtual const char* message() const;
		virtual const char* location() const;

		//析构函数只要定义就一定要实现，即使是纯虚函数
		//析构函数最终一定会调用父类的析构函数
		virtual ~Exception() = 0;
	};


	class ArithmeticException : public Exception
	{
	public:
		ArithmeticException(): Exception(nullptr, nullptr, 0){}
		ArithmeticException(const char* message): Exception(message, nullptr, 0){}
		ArithmeticException(const char* file, int line): Exception(nullptr, file, line){}
		ArithmeticException(const char* message, const char* file, int line): Exception(message, file, line){}

		ArithmeticException(const ArithmeticException& e): Exception(e){}
		ArithmeticException& operator= (const ArithmeticException& e)
		{
			Exception::operator=(e);
			return *this;
		}
	};

	class InValidParameterException : public Exception
	{
	public:
		InValidParameterException(): Exception(nullptr, nullptr, 0){}
		InValidParameterException(const char* message): Exception(message, nullptr, 0){}
		InValidParameterException(const char* file, int line): Exception(nullptr, file, line){}
		InValidParameterException(const char* message, const char* file, int line): Exception(message, file, line){}

		InValidParameterException(const InValidParameterException& e): Exception(e){}
		InValidParameterException& operator= (const InValidParameterException& e)
		{
			Exception::operator=(e);
			return *this;
		}
		~InValidParameterException() = default;
	};

	class NoEnoughMemoryException : public Exception
	{
	public:
		NoEnoughMemoryException(): Exception(nullptr, nullptr, 0){}
		NoEnoughMemoryException(const char* message): Exception(message, nullptr, 0){}
		NoEnoughMemoryException(const char* file, int line): Exception(nullptr, file, line){}
		NoEnoughMemoryException(const char* message, const char* file, int line): Exception(message, file, line){}

		NoEnoughMemoryException(const NoEnoughMemoryException& e): Exception(e){}
		NoEnoughMemoryException& operator= (const NoEnoughMemoryException& e)
		{
			Exception::operator=(e);
			return *this;
		}
		~NoEnoughMemoryException() = default;
	};

	class InValidOperationException : public Exception
	{
	public:
		InValidOperationException(): Exception(nullptr, nullptr, 0){}
		InValidOperationException(const char* message): Exception(message, nullptr, 0){}
		InValidOperationException(const char* file, int line): Exception(nullptr, file, line){}
		InValidOperationException(const char* message, const char* file, int line): Exception(message, file, line){}

		InValidOperationException(const InValidOperationException& e): Exception(e){}
		InValidOperationException& operator= (const InValidOperationException& e)
		{
			Exception::operator=(e);
			return *this;
		}
		~InValidOperationException() = default;
	};

	class IndexOutOfBoundsException : public Exception
	{
	public:
		IndexOutOfBoundsException(): Exception(nullptr, nullptr, 0){}
		IndexOutOfBoundsException(const char* message): Exception(message, nullptr, 0){}
		IndexOutOfBoundsException(const char* file, int line): Exception(nullptr, file, line){}
		IndexOutOfBoundsException(const char* message, const char* file, int line): Exception(message, file, line){}

		IndexOutOfBoundsException(const IndexOutOfBoundsException& e): Exception(e){}
		IndexOutOfBoundsException& operator= (const IndexOutOfBoundsException& e)
		{
			Exception::operator=(e);
			return *this;
		}
		~IndexOutOfBoundsException() = default;
	};
}
#endif //DTLIB_EXCEPTION_H
