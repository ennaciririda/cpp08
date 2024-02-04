#include <iostream>
#include <vector>
#include <algorithm>

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

int shortestSpan(std::vector<int> vec)
{
	int shortest;
	std::vector<int> tmp;
	tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];
	for (unsigned long i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}
	return shortest;
}


// int main()
// {
// 	// std::vector<int> vec;

// 	// vec.push_back(1);
// 	// vec.push_back(8);
// 	// vec.push_back(10);
// 	// vec.push_back(2);
// 	// std::cout << shortestSpan(vec);
// 	for (int i = 0; i < vec.size() ; i++)
// 		std::cout << vec[i] << std::endl;
// 	// for (int i = 0; i < tmp.size() ; i++)
// 	// 	std::cout << tmp[i] << std::endl;
// }
#include <stack>

int main()
{
	std::stack<>
	return 0;
}