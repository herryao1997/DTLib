#include <iostream>

template<typename T>
void Swap(T& a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}


template<typename T>
class Op{
public:
    T process(T v)
    {
        return v * v;
    }
};


int main() {
    int a = 2;
    int b = 1;
    Swap(a, b);

    std::cout << "a = " << a << " b = " << b <<std::endl;

    double c = 0.01;
    double d = 0.02;
    Swap(c, d);

    std::cout << "c = " << c << " d = " << d <<std::endl;


    Op<int> opInt;
    Op<double> opDouble;

    std::cout << "5 * 5 = " << opInt.process(5) << std::endl;
    std::cout << "0.01 * 0.01 = " << opDouble.process(0.01) << std::endl;
    return 0;
}
