#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	char s;

	cin >> a >> s >> b;

	if (s == 61)
	{
		if (a == b)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (s == 60)
	{
		if (a < b)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (s == 62)
	{
		if (a > b)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}


	return 0;
}