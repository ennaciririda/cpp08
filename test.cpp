#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

int get_min(std::vector<int> v)
{
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

class hmed
{
	public :
		int a;
};

int main()
{
	hmed g;
	return 0;
}