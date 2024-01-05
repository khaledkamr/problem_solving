#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string x, y;
		cin >> x >> y;

		for (int i = 0; i < max(x.size(), y.size()); i++)
		{
			if (i < x.size())
			{
				cout << x[i];
			}
			if (i < y.size())
			{
				cout << y[i];
			}
		}
		cout << endl;
	}	

	return 0;
}