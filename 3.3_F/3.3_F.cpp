// 3.3_F.cpp 
#include <iostream>

#include "Angle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	Triangle a(3,3,3);
	cout << a;
	cin >> a;
	cout << a;
	a.Type();
	cout << "P = " << a.P() << endl;
	cout << "S = " << a.S() << endl;
}

