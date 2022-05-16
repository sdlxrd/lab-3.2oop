#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Man.h"

using namespace std;

class Official : public Man	//службовець
{
private:
	int salary;
public:
	Official(const int salary = 0);
	Official(const Official& x);
	~Official();

	int getSal() const { return salary; }
	void setSal(int salary) { this->salary = salary; }

	operator string() const;
	friend ostream& operator<<(ostream& os, const Official& x);
	friend istream& operator>>(istream& is, Official& x);	
	
	friend void ChangeSalary(Official& x);
};

