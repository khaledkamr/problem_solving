#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c;
	char s, q;

	cin >> a >> s >> b >> q >> c;

	if (s == 43)
	{
		if (a + b == c)
		{
			cout << "Yes";
		}
		else
		{
			cout << a + b;
		}
	}
	else if (s == 42)
	{
		if (a * b == c)
		{
			cout << "Yes";
		}
		else
		{
			cout << a * b;
		}
	}
	else if (s == 45)
	{
		if (a - b == c)
		{
			cout << "Yes";
		}
		else
		{
			cout << a - b;
		}
	}
	else if (s == 47)
	{
		if (a / b == c)
		{
			cout << "Yes";
		}
		else
		{
			cout << a / b;
		}
	}



	return 0;
}