#include "Man.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Man::Man(string name, int age) : name(name), age(age)
{}
Man::Man(const Man& x)
{
	this->name = name;
	this->age = age;
}
Man::~Man()
{}

Man::operator string() const
{
	stringstream ss;
	ss << "Name: " << name << endl;
	ss << "Age: " << age << endl;
	
	return ss.str();
}

ostream& operator <<(ostream& out, const Man& x)
{
	out << string(x);
	return out;
}
istream& operator >>(istream& in, Man& x)
{
	cout << "Name: "; in >> x.name;
	cout << "Age: "; in >> x.age;
	return in;
}
void change(Man& x)
{
	x.age++;
}