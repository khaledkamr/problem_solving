#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int add(int a, int b)
{
	int sum = a + b;

	return sum;
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << add(x, y);
	return 0;
}