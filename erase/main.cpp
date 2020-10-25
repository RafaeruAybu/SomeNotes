#include <iostream>
#include <string>
 
int main()
{
  std::string str{ "The rice is cooking" };
 
  str.erase(18, 1);
 
  std::cout << str << '\n';
 
  return 0;
}