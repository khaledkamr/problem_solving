#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	double x, p;

	cin >> x >> p;

	cout << p * (100 / (100 - x));

	return 0;
}