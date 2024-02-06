#include "Span.hpp"

int main()
{
	try
	{
		int t;
		Span sp = Span(11);
		std::vector<int> veccc;
		srand(time(0));
		for (int i = 0; i < 10000; i++)
		{
			t = rand() % 100000;
			veccc.push_back(t);
		}
		sp.addNumber(1337);
		sp.fill_my_vec(veccc.begin() +  9990, veccc.end());
		sp.print_vec();
		std::cout << "Shortest span :" << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span :" << sp.longestSpan() << std::endl;
	}
	catch(const char *str)
	{
		std::cerr << str << std::endl;
	}
	return 0;
}