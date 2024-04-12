#include <iostream>

double divide(double a, double b)
{
    const double delta = 0.000000000000001;
    double ret = 0;
    //不要使用浮点数之间的相等性比较，采用阈值比较法
    if(!((-delta < b) && (b < delta)))
    {
        ret = a / b;
    }
    else
    {
        throw 0;	//产生除0异常
    }

    return ret;
}

void test01(){
    std::cout << "main() begin" << std::endl;
    divide(1, 0);
    std::cout << "main() end" << std::endl;
}

void test02()
{
    std::cout << "main() begin" << std::endl;
    try
    {
        divide(1, 0);
    }
    catch(int e)
    {
        std::cerr << "Divided by zero caught!" << std::endl;
    }
    std::cout << "main() end" << std::endl;
}

void test03()
{
    try
    {
        throw 'c';
    }
    catch(int i)
    {
        std::cout << "catch (int i)" << std::endl;
    }
    catch (double d)
    {
        std::cout << "catch (double d)" << std::endl;
    }
    catch (char c)
    {
        std::cout << "catch (char c)" << std::endl;
    }
}


void test04()
{
    try
    {
        throw "hello world\n";
    }
    catch (char* c)
    {
        std::cout << "catch (char* c)" << std::endl;
    }
    catch (const char* cc)
    {
        std::cout << "catch (const char* cc)" << std::endl;
    }
    catch(...)
    {
        std::cout << "catch (...)" << std::endl;
    }
}


int main() {
//    test01();
//    test02();
//    test03();
    test04();
    return 0;
}
