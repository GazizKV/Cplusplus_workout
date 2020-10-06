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
		std::cout << "Hooray!!! Me " << name_ << " enrolled to the course!\n";
		//RESOURSCE ALLOCATION
		memory = new double[100];
	}

	~Student()
	{
		std::cout << "ME " << name << " dissmissed";
		//RESOURCE DEALLOCATION
		delete[] memory;
	}
	void print() const
	{
		std::cout << name << " " << group << " " << age << "\n";
	}
	void ageing()
	{
		age += 1;
		std::cout << "Horay!!! Today is my birthday! I'm " << name << "\n";
		print();
	}
};

int main()
{
	Student a("Petya", "B02-991", 18);

	a.print();
	a.ageing();
	a.print();

	Student b("Vasya", "B012", 17);
	b.print();
	b = a;
	b.print();
	
	return 0;
}
