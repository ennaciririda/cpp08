#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <vector>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}

	MutantStack(){}
	~MutantStack(){}
};


#endif