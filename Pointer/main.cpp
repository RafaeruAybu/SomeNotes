#include <iostream>

void Foo(int *pa, int *pb, int *pc)
{
    (*pa) = 555;
    (*pb)++;
    (*pc) = -20;
}

template <typename T>
T Sum(T &a, T &b)
{
    return a + b;
}

template<typename T1, typename T2>
T1 Sum(T1 &a, T2 &b)
{
    return a + b;
}

int Foo1(int a){ return 0;}
int Foo2(int a){ return a * 2;}

int main()
{
    int a{0}, b{0}, c{1};
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    Foo(&a,&b,&c);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << Sum(a,c) << std::endl;
    
    int(*fooPointer)(int a);

    fooPointer = Foo1;

    std::cout << fooPointer(5) << std::endl;


    return 0;
}