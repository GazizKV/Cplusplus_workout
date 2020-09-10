#include <list>
#include <iostream>
#include <algorithm>

void procedure(int x)
{
	std::cout << x << '\n';
}

int main ()
{
	std::list<int> A;

	for(int i=0; i < 10; i++)
		A.push_back(i);

	std::list<int>::iterator it1 = A.begin();
	while (it1 < A.end()) {
		std::cout << *it1 << " ";
		++it1;
	}

	std::cout << "\n";

	auto it2 = A.begin();
	while (it2 != A.end()) {
		std::cout << *it2 << " ";
		++it2;
	}


	std::cout << "\n";

	for (auto it3 = A.begin(); it3 != A.end(); ++ it3) {
		std::cout << *it3 << " ";
	}

	std::cout << "\n";

	std::cout << "for_each:\n";

	std::for_each(A.begin(), A.end(), procedure);

	std::cout << "range based for:\n";
	for (auto x: A){
		std::cout << x << ' ';
	}

	return 0;
}
