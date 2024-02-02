#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <vector>

template <typename T>
int func(T a, int b)
{
	for (unsigned long i = 0 ; i < a.size(); i++)
	{
		if (a[i] == b)
			return a[i];
	}
	throw "No occurence of the element given in the vector";
}

#endif