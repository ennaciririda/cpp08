#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->n = N;
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		for (unsigned long i = 0; i < obj.vec.size(); i++)
		{
			this->vec[i] = obj.vec[i];
		}
		this->n = obj.n;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (this->vec.size() < this->n)
		this->vec.push_back(n);
	else
		throw "The container is full";
}

int Span::get_min(std::vector<int> v)
{
	int min = v[0];
	for (unsigned long i = 1; i < v.size() ; i++)
	{
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int Span::get_max(std::vector<int> v)
{
	int max = v[0];
	for (unsigned long i = 0; i < v.size() ; i++)
	{
		if (v[i] > max)
			max = v[i];
	}
	return max;
}

int Span::shortestSpan()
{
	int shortest;
	std::vector<int> tmp;
	tmp = this->vec;
	if (this->vec.size() <= 1)
		throw "Not enaugh elements in the container";
	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];
	for (unsigned long i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}
	return shortest;
}

int Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw "Not enaugh elements in the container";
	return get_max(this->vec) - get_min(this->vec);
}

Span::~Span()
{
}
