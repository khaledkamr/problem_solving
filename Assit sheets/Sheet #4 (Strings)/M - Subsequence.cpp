#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x, y = "hello";
	cin >> x;

	int z = 0;

	for (int i = 0; i < x.size() && z < y.size(); i++)
	{
		if (x[i] == y[z])
		{
			z++;
		}
	}

	if (z == 5)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}