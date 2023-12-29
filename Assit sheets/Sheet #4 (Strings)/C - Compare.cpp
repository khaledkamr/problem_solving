#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;
	
	for (int i = 0; i < min(x.size(), y.size()); i++)
	{
		if (x[i] < y[i])
		{
			cout << x;
			return 0;
		}
		else if (x[i] > y[i])
		{
			cout << y;
			return 0;
		}
	}

	if (x.size() < y.size())
	{
		cout << x;
	}
	else
	{
		cout << y;
	}

	return 0;
}