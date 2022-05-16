#include <iostream>
#include "Official.h"

using namespace std;

int main()
{
	Official x;

	cin >> x;
	cout << endl << "Info:" << endl << x << endl;

	cout << "Today is " << x.getName() << "`s birthday" << endl;
	change(x);
	cout << "he turned " << x.getAge() << " ." << endl;
	cout << "In honor of this event, was raised his salary" << endl;
	ChangeSalary(x);
	cout << x.getName() << "`s new salary is " << x.getSal() << endl;
}