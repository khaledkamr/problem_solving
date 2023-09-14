#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 

double sum(double n)
{
	double x, sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
	}

	return sum;
}

int main()
{
	double size;
	cin >> size;

	cout << fixed << setprecision(6) << sum(size) / size;
	return 0;
}