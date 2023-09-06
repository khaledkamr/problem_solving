#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	double r = a / b;

	cout << "floor " << a << " / " << b << " = " << floor(r) << endl;
	cout << "ceil " << a << " / " << b << " = " << ceil(r) << endl;
	cout << "round " << a << " / " << b << " = " << round(r) << endl;

	return 0;
}