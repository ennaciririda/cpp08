#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> vec;
	unsigned int n;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	void addNumber(int n);
	int get_min(std::vector<int> v);
	int get_max(std::vector<int> v);
	int shortestSpan();
	int longestSpan();
	~Span();
};

#endif