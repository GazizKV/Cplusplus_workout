#include <iostream>

using namespace std;

int64_t factorial(int16_t n)
{
	int64_t result;
	std::cout << "Factorial ("<< n << ") is called\n";
	if (n == 0)
	{
		result = 1;	
	}
	else
	{
		result = factorial(n - 1) * n;	
	}
	std::cout << "factorial (" << n << ") is exiting.\n";
	return result;
}
int main()
{
	int x;
	std::cin >> x;
	std::cout << factorial(x) << '\n';

	return 0;
}
