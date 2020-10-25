#include <iostream>
#include <string>

class Human
{
public:
    int i{0};
    std::string s;
    Human()
    {
        i = 0;
        std::cout << "конструктор" << this << std::endl;
    }
    ~Human()
    {
        std::cout << "деструктор" << this << std::endl;
    }
private:
    int i;
};

void Foo(Human value)
{
    std::cout << "Вызвался Foo" << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Human Sergey;
    Sergey.i = 24;
    Sergey.s = "Serega";
    std::cout << Sergey.i << std::endl;
    std::cout << Sergey.s << std::endl;
    
    return 0;
}