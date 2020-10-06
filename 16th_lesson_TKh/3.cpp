#include <iostream>

template <typename T>
T my_abs(T x)
{
	if (x < 0)
		return -x;
	else
		return x;
}
int main()
{
	std::cout << abs('A') << "\n";
	std::cout << abs(-23) << "\n";
	std::cout << abs(-3.5) << "\n";

	return 0;
}
