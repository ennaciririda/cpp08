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
	int a;
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
	const_iterator cbegin()
	{
		return this->c.cbegin();
	}
	const_iterator cend()
	{
		return this->c.cend();
	}
	MutantStack(){}
	~MutantStack(){}
	MutantStack(const MutantStack &obj) : std::stack<T>(obj)
	{
		*this = obj;
	}
	MutantStack &operator=(const MutantStack &obj)
	{
		(void)obj;
		return *this;
	}
};


#endif