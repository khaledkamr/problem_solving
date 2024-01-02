#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x;
	cin >> x;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == ',')
		{
			x[i] = ' ';
		}
		else if (x[i] < 91 && x[i] > 64)
		{
			x[i] += 32;
		}
		else if (x[i] > 96 && x[i] < 123)
		{
			x[i] -= 32;
		}
	}

	cout << x;

	return 0;
}