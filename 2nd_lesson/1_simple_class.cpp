#include <iostream>
#include <string>

struct Student
{
	std::string name;
	std::string group;
	int age;


	void init()
	{
		name = "Vasya";
		group = "B02-999";
		age = 18;

	}

	void print() const
	{
		std::cout << name << " " << group << " ";
		std::cout << age << "\n";
	}

	void ageing()
	{
		std::cout << "Hooray!!! Today is my birthday! I'm " << name << "!\n";
		age += 1;
	}
};
int main()
{
	Student a;

	a.init();
	a.print();
	a.ageing();
	a.print();
	return 0;
}
