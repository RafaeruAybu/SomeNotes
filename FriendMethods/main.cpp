#include "stdafx.h"

class Apple;
class Human;

class Apple
{
public:
    Apple(int weight, std::string color)
    {

    }
private:
    int weight;
    std::string color;

    friend void Human::TakeApple(Apple &apple);
};

class Human
{
public:
void TakeApple(Apple &apple)
{
    
}
private:

};

int main()
{
    setlocale(LC_ALL, "ru");
    Apple apple(150,"RED");
    Human human;
    human.TakeApple(apple);  
    return 0;
}