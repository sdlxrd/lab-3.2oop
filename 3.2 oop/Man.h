#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Man
{
private:
	string name;
	int age;
public:
	Man(const string name = "0", const int age = 0);
	Man(const Man& a);
	~Man();

	string getName() const { return name; }
	int getAge() const { return age; }
	
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }

	operator string() const;
	friend ostream& operator<<(ostream& out, const Man& x);
	friend	istream& operator >>(istream& in, Man& x);

	friend void change(Man& x);
};

