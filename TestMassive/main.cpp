#include <iostream>
#include <string>

int main()
{
    int x{};
    int size{5};
    int *arr = new int[size];
    for(int i = 0; i<size; i++)
    {
        std::cout << "Input your value into i=" << i;
        std::cin >> arr[i];
        std::cout << std::endl;
    }
 
    for (int i = 0; i < size; i++)
    {
    std::cout << arr[i] << std::endl;
    }
    delete [] arr;
    return 0;
}