#include <iostream>
#include <string>
#include <vector>

using std::vector;

int main()
{
	std::cout << "Hello World!" << std::endl;

	vector<int> vintegers;
	int i;
	while(std::cin >> i)
	{
		vintegers.push_back(i);
	}

	return 0;
}