#include <cstdlib>
#include <iostream>

const int ITERATIONS = 1e7;
int main()
{
    double sum = 0;
    for (int i = 0; i < ITERATIONS; i++)
    sum += rand() % 1000000;
    std::cout << "Average value: " << sum / ITERATIONS << '\n';   
    return 0;
}