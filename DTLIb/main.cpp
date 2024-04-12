#include <iostream>

#include "SmartPointer.h"
#include "Exception.h"
#include "Object.h"
#include "List.h"
#include "SeqList.h"
#include "StaticList.h"
#include "DynamicList.h"


using namespace DTLib;
class Test
{
public:
	Test()
	{
		std::cout << __FUNCTION__ << std::endl;
	}

	~Test()
	{
		std::cout << __FUNCTION__ << std::endl;
	}
};


class Test_OBJ : public Object
{
public:
	//vptr 8
	int i;  //4
	int j;  //4
	//8 + 4 + 4 = 16
};

class Child : public Test_OBJ
{
public:
	int k;  //4 >> 24
//    int l;  //4 >> 24 多添加一个成员依旧是24 由此可见这个24来自于内存对齐
	//4 + 16 >> 内存空间对齐， 8 + 16 = 24
};

void test_4_sp();
void test_4_exception();
void test_4_obj();
//用于测试统一继承树代码
void test_4_single_tree();
void test_4_list_00();
void test_4_SeqList_00();
void test_4_StaticList_00();
void test_4_DynamicList_00();
void test_4_cp_List();
void test_4_insert_back();

int main()
{
//    test_4_sp();
//    test_4_exception();
//    test_4_obj();
//    test_4_single_tree();
//	test_4_list_00();
//	test_4_SeqList_00();
//	test_4_StaticList_00();
//	test_4_DynamicList_00();
//	test_4_cp_List();
	test_4_insert_back();
	return 0;
}


void test_4_sp()
{
	SmartPointer<Test> sp = new Test;
	SmartPointer<Test> nsp;
	nsp = sp;
//    nsp++;
	std::cout << "sp is null? " << sp.isNull() << std::endl;
	std::cout << "nsp is null? " << nsp.isNull() << std::endl;
}

void test_4_exception()
{
	try
	{
		//有纯虚函数无法实例化
		THROW_EXCEPTION(ArithmeticException, "test");
	}
	catch(const ArithmeticException& e)
	{
		//含有继承关系时，子类应当提前catch，父类应当之后
		std::cout << "catch (const ArithmeticException& e)" << std::endl;
		std::cout << e.message() << std::endl;
		std::cout << e.location() << std::endl;
	}
	catch(const Exception& e)
	{
		//面向对象包含继承的兼容性赋值原则
		std::cout << "catch (const Exception& e)" << std::endl;
		std::cout << e.message() << std::endl;
		std::cout << e.location() << std::endl;
	}
}


void test_4_obj(){
	Object* obj1 = new Test_OBJ;
	Object* obj2 = new Child;

	std::cout << "obj1: " << obj1 << std::endl;
	std::cout << "obj2: " << obj2 << std::endl;

	delete obj1;
	delete obj2;
}


void test_4_single_tree()
{
	auto sp = new SmartPointer<int>;
	delete sp;
	auto e = new InValidOperationException;
	delete e;
}

void test_4_list_00()
{
	List<int>* l = nullptr;
}

void test_4_SeqList_00()
{
	SeqList<int>* pseq = nullptr;
}

void test_4_StaticList_00()
{
	StaticList<int, 5> l;
	for (int i = 0; i < l.capacity(); ++i)
	{
		l.insert(0, i);
	}

	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}
	std::cout << "\n===========\n";
	l[0] *= l[0];

	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}

	std::cout << "\n===========\n";

	try
	{
		l[5] = 5;
	}
	catch(const Exception& e)
	{
		std::cout << e.message() << std::endl;
		std::cout << e.location() << std::endl;
	}
}

void test_4_DynamicList_00()
{
	DynamicList<int> l(5);
	for (int i = 0; i < l.capacity(); ++i)
	{
		l.insert(0, i);
	}

	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}
	std::cout << "\n===========\n";
	l[0] *= l[0];

	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}

	std::cout << "\n===========\n";

	try
	{
		l[5] = 5;
	}
	catch(const Exception& e)
	{
		std::cout << e.message() << std::endl;
		std::cout << e.location() << std::endl;
		l.resize(10);
		l.insert(5, 10);
	}

	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}

	std::cout << "\n===========\n";

	try
	{
		l[5] = 5;
	}
	catch(const Exception& e)
	{
		std::cout << e.message() << std::endl;
		std::cout << e.location() << std::endl;
//		l.resize(10);
	}
	for (int i = 0; i < l.length(); ++i)
	{
		std::cout << l[i] << "\t";
	}

	std::cout << "\n===========\n";
}

void test_4_cp_List()
{
	DynamicList<int> l(5);
//	DynamicList<int> p = l;
	//编译出错
}

void test_4_insert_back()
{
	DynamicList<int> d(5);
	for(int i=0; i<d.capacity(); ++i)
	{
		d.insert(i);
	}
	for (int i = 0; i < d.length(); ++i)
	{
		std::cout << d[i] << "\t";
	}


}