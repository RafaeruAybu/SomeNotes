#include <iostream>
#include <string>

class IBicycle
{
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride()= 0;
};

class Human
{
public:
    void RideOn(IBicycle & bicycle)
    {
        std::cout << "Turning wheel." << std::endl;
        bicycle.TwistTheWheel();
        std::cout << "GO!" << std::endl;
        bicycle.Ride();
    }
};

class SimpleBicycle : public IBicycle
{
public:
    void TwistTheWheel() override
    {
        std::cout << "Метод ТВИСТ" << std::endl;
    }
    void Ride() override
    {
        std::cout << "Метод РАЙД" << std::endl;
    }
};

int main()
{
    SimpleBicycle sb;
    
    Human h;
    h.RideOn(sb);
    return 0;
}