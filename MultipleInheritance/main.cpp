#include <iostream>
#include <string>

class Car
{
private:
    /* data */
public:
    void Use()
    {
        std::cout << "Я еду!" << std::endl;
    }
};


class AirPlane
{
private:
    /* data */
public:
    void Use()
    {
        std::cout << "Я лечу!" << std::endl;
    }
};

class FlyingCar : public Car, public AirPlane
{
public:
    
};

int main()
{
    setlocale(LC_ALL, "ru");
    
    return 0;
}