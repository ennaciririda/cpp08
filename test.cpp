#include <iostream>
#include <vector>

int get_min(std::vector<int> v)
{
	// if ()
	int min = v[0];
	for (unsigned long i = 0; i < v.size() ; i++)
	{
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main()
{
	std::vector<int> vec;

	vec.push_back(12);
	vec.push_back(-132);
	vec.push_back(14);
	vec.push_back(132);
	std::cout << get_min(vec);
}