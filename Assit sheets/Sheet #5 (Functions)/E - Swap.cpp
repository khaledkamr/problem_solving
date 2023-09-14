#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cin >> a >> b;

	swap(a, b);
	cout << a << " " << b;
	return 0;
}