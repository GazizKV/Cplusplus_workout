#include <iostream>
#include <string>

struct Student
{
private:
	std::string name;
	std::string group;
	int age;
	double *memory;

public:
	Student(std::string name_, std::string group_, int age_)
	{
		name = name_;
		group = group_;
		age = age_;
		std::cout << "Hooray!!! Me " << name << " dismissed enrolled to the course!\n";
		//RESOURCE ALLOCATION
		memory = new double[100];
	}

	~Student()
	{
		std::cout << "Ouch!!! Me " << name << " from the course!\n";
		//RESOURCE DEALLOCATION
		delete[] memory;
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
		print(); //the same as this->print()
	}
};
int main()
{
	Student a("Petya", "B02-991", 18);

	a.print();
	a.ageing();

	Student b("Vasya", "B03-993", 35);
	b.print();
	b.ageing();


	return 0;
}
