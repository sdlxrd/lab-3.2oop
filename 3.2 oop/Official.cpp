#include "Official.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
Official::Official(const int salary)
{
	setSal(salary);
}
Official::Official(const Official& x)
{
	int s =	x.getSal();
	setSal(s);
}
Official::~Official()
{}

Official::operator string() const
{
	stringstream ss;
	ss << "Name:   " << getName() << endl;
	ss << "Age:    " << getAge() << endl;
	ss << "Salary: " << salary << endl;

	return ss.str();
}
istream& operator >>(istream& in, Official& x)
{
	int age, salary;
	string name;
	cout << "Name: "; in >> name;
	cout << "Age: "; in >> age;
	cout << "Salary: "; in >> salary;

	x.setAge(age);
	x.setName(name);
	x.setSal(salary);
	return in;
}
ostream& operator <<(ostream& out, const Official& x)
{
	out << string(x);
	return out;
}
void ChangeSalary(Official& x)
{
	x.salary += 1000;
}