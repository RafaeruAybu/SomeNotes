#include <iostream>
#include <string>

class Msg
{
public:
    Msg(std::string msg)
    {
        this->msg = msg;
    }
    virtual std::string GetMsg()
    {
        return msg;
    }
private:
    std::string msg;
};

class BraketsMsg : public Msg
{
public:
    BraketsMsg(std::string msg):Msg(msg)
    {
        
    }
    std::string GetMsg() override
    {

        return "[" + ::Msg::GetMsg() + "]";
    }
};

class Printer
{
public:
    void Print(Msg *msg)
    {
        std::cout << msg->GetMsg() << std::endl;
    }
};


int main()
{
    setlocale(LC_ALL, "ru");
    BraketsMsg m("Hello!");
    Printer p;
    p.Print(&m);

    return 0;
}