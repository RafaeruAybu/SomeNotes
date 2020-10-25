#include "stdafx.h"

class Point
{
private:
    int x{0};
    int y{0};
public:     
    Point(/* args */);
    ~Point();
    void setPoints(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getPoints(char c)
    {
        if(c == 'x')
        {
            return this->x;
        } else if(c == 'y')
        {
            return this->y;
        }
    }
    Point & operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point & operator ++(int value)
    {
        Point temp;
        this->x++;
        this->y++;
        return temp;

    }
};

Point::Point(/* args */)
{
}

Point::~Point()
{
}


int main(int argv,char ** argc)
{
    Point myPoint;
    myPoint.setPoints(2,4);
    std::cout << "Points are: " << myPoint.getPoints('x') << std::endl;
    Point a;
    a.setPoints(3,6);
    ++a;
    a++;
    return 0;
}