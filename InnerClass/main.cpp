#include <iostream>
#include <string>

class Image
{
public:
    void GetImageInfo()
    {
        for (int i = 0; i < length; i++)
        {
            std::cout << pixels[i].GetInfo();
            std::cout << std::endl;
        }
        
    }
protected:
    class Pixel
    {
        public:
            Pixel(int r, int g, int b)
            {
                this->r = r;
                this->g = g;
                this->b = b;
            }
            std::string GetInfo()
            {
                return "Pixel: r= " + std::to_string(r) + " g= " + std::to_string(g) + " b= " + std::to_string(b);
            }
        private:
        int r,g,b;
    };
    
    static const int length = 5;

    Pixel pixels[length]
    {
        Pixel(0,4,64),
        Pixel(4,14,10),
        Pixel(111,4,24),
        Pixel(244,244,14),
        Pixel(111,179,64)
    };
};

int main()
{
    setlocale(LC_ALL,"ru");
    Image img;
    img.GetImageInfo();
    return 0;
}