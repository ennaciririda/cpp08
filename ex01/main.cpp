#include "Span.hpp"

int main()
{
	try
	{
		int t;
		Span sp = Span(10000);
		srand(time(0));
		for (int i = 0; i < 10000; i++)
		{
			t = rand() % 100000;
			sp.addNumber(t);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const char *str)
	{
		std::cerr << str << std::endl;
	}
	return 0;
}