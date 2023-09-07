#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	char op;
	int x, y;

	cin >> x >> op >> y;

	if (op == 42)
	{
		cout << x * y;
	}
	else if (op == 43)
	{
		cout << x + y;
	}
	else if (op == 45)
	{
		cout << x - y;
	}
	else if (op == 47)
	{
		cout << x / y;
	}



	return 0;
}