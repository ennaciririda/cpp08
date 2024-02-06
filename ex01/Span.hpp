#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int> vec;
	unsigned int n;
	Span();
public:
	Span(unsigned int N);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	void addNumber(int n);
	void fill_my_vec(std::vector<int>::iterator it, std::vector<int>::iterator it2);
	void print_vec();
	int get_min(std::vector<int> v);
	int get_max(std::vector<int> v);
	int shortestSpan();
	int longestSpan();
	~Span();
};

#endif