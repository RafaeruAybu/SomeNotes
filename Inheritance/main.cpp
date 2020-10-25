#include <iostream>
#include <string>

class Human 
{
private:
    std::string name = "Иван Иванович";
public: 
    std::string GetName()
    {
        return name;
    }
};

class Student : public Human
{
public:
    std::string group;
    void Learn()
    {
        std::cout << "Я учусь!" << std::endl;
    }
};

class Professor : public Human
{
public:
    std::string subject;

};

class ExtramuralStudent : public Student
{
public:
    void Learn()
    {
        std::cout << "Я бываю в универе реже обычного студента!" << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Student st;
    Professor pr;
    ExtramuralStudent extraSt;
    st.Learn();
    std::cout << st.GetName() << std::endl;
    extraSt.Learn();

    return 0;
}