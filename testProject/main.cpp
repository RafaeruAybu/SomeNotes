#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
    setlocale(LC_ALL, "ru");
    int r;
    r = rand() % 51;
    std::cout << "Хай, я загадал заходи!" << std::endl;
    for (int i = 0; i <= 5; i++)
    {
        std::cout << "Попытка номер "<< (i+1) << std::endl;
        std::cout << "Введи число: " << std::endl;
        int x{0};
        
        if(std::cin>>x){
            if(x == r)
            {
                std::cout << "Угадал!" << std::endl;
                return 0;
            } else if(x < r) 
            {
                std::cout << "Число больше!" << std::endl;
            } else if(x > r)
            {
                std::cout << "Число меньше!" << std::endl;
            }
        } else {
            std::cout << "Ощибка ввода!" << std::endl;
            break;
        }
    }
    std::cout << "Вы проиграли!" << std::endl;
    return 0;
}