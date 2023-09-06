#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	double r;
	double const P = 3.141592653;

	cin >> r;


	cout << setprecision(9) << P * (r * r);



	return 0;
}