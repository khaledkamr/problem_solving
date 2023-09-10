#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	string code;
	cin >> code;

	if (code[a] != '-')
	{
		cout << "No";
		return 0;
	}

	if (code.size() != a + b + 1)
	{
		cout << "No";
		return 0;
	}

	int count = 0;

	for (int i = 0; i < code.size(); i++)
	{
		if (code[i] >= 48 && code[i] <= 57 && i != a)
		{
			count++;
		}
	}

	if (count == a + b)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}