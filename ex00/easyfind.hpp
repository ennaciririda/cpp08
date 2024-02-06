#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int func(T a, int b)
{
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), b);
	if (it != a.end())
		return *it;
	else
		throw "No occurence of the element given in the vector";
}

#endif