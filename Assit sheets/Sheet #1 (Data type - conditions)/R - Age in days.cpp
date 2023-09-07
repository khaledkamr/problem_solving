#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	long long d;

	cin >> d;

	int i;

	for (i = 0; d >= 365; i++)
	{
		d -= 365;
	}

	cout << i << " years" << endl;

	for (i = 0; d >= 30; i++)
	{
		d -= 30;
	}

	cout << i << " months" << endl;

	cout << d << " days";


	return 0;
}