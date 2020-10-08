#include <iostream>

void foo(int x)
{
	std::cout << " foo(int) is called\n";
}

void foo(double x)
{
	std::cout << " foo(double) is called\n";
}
void foo(unsigned char x)
{
	std::cout << " foo(unsigned char) is called\n";
}


int main()
{
	foo(1);
	foo(4.5);
	foo(23U);
	return 0;
}
