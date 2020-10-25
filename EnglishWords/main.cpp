//main
#include <iostream>
#include "stdafx.h"

int main()
{
    #ifdef DEBUG
    std::cout << "Hello world!" << std::endl;
    #endif
    
    DBIDumbster dumster;
    dumster.sayHello();

    return 0;
}