#include "easyfind.hpp"

int main()
{
	try
	{
		int a = 12;
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << func(vec, a) << std::endl;
	}
	catch(const char *str)
	{
		std::cerr << str << std::endl;
	}

}