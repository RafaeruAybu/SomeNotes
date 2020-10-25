#include <iostream>
#include <string>

class Cap 
{
public:
    std::string GetColor()
    {
        return color;
    }
private:
    std::string color = "red";
};

 class Model
 {
public:
    void InpectModel()
    {
        std::cout << "Кепка " << cap.GetColor() << " цвета." << std::endl;
    }
private:
    Cap cap;
 };

class Human
{
public:
    void Think()
    {
        brain.Think();
    }
    void InspectTheCap()
    {
        std::cout << "Моя кепка " << cap.GetColor() << std::endl;
    }
private:
    
    
    class Brain
    {
        public:
            void Think()
            {
                std::cout << "Я думаю!" << std::endl;
            } 
    };

    Brain brain;
    Cap cap;
};
int main()
{
    setlocale(LC_ALL, "ru");
    Human human;
    human.Think();
    human.InspectTheCap();
    return 0;
}