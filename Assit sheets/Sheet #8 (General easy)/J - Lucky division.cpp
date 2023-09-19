#include<iostream>
#include<string>
#define ll long long
using namespace std;

bool isLucky(int x)
{
	bool lucky = true;

	for (int i = x; i != 0; i /= 10)
	{
		int d = i % 10;

		if (d != 7 && d != 4)
		{
			lucky = false;
			break;
		}
	}

	return lucky;
}

bool luckyDiv(int x)
{
	int luckyNums[12] = { 4,7,44,47,77,74,444,474,477,777,747,744 };
	bool divisable = false;

	for (int i = 0; i < 12; i++)
	{
		if (x % luckyNums[i] == 0)
		{
			divisable = true;
			break;
		}
	}

	return divisable;
}

int main()
{
	int num;
	cin >> num;

	if (isLucky(num))
	{
		cout << "YES";
	}
	else
	{
		if (luckyDiv(num))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
}

