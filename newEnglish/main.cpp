#include <iostream>
#include <string>
#include "dbiDUMBSTER.h"
int main()
{
    std::cout << "Hello world!" << std::endl;
    std::string s = "STRING from main";
    std::cout << s << std::endl;
    DBIDumbster db;
    db.sayHello();
    std::cout << "Ok, lets test my debugger!" << std::endl;
    int v = 2, b = 3;
    int p;
    p = v + b;
    std::cout << "p is" << p << std::endl;

    return 0;
}