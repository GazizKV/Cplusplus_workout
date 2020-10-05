#include <iostream>
#include <list>
#include <algorithm>

void procedure(int x)
{
	std::cout << x << '\t';
}

int main()
{
	std::list<int> A;

	for (int i = 0; i < 10; i++)
		A.push_back(i);
	// bad vercion
	std::list<int>::iterator it1 = A.begin();
	while (it1 != A.end())
	{
		std::cout << *it1 << "\t";
		++it1;
	}
	std::cout << "\n";
	// good vercion
	auto it2 = A.begin();
	while (it2 != A.end())
	{
		std::cout << *it2 << "\t";
		++it2;
	}
	std::cout << "\n";
	
	for (auto it3 = A.begin(); it3 != A.end(); ++it3)
		std::cout << *it3 << "\t";
	std::cout << "\n";

	std::for_each(A.begin(), A.end(), procedure);
	std::cout << "\n";

	std::cout << "range based for:\n";
	for (auto x: A)
	{
		std::cout << x << "\t";
	}


	return 0;
}
