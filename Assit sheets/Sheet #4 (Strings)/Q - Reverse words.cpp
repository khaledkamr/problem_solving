#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x, y;

	getline(cin, x);
	                                   
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != ' ')
		{
			y += x[i];
		}
		if (x[i] == ' ' || i == x.size() - 1)
		{
			reverse(y.begin(), y.end());
			cout << y;

			if (i != x.size() - 1)
			{
				cout << " ";
			}

			y = "";
		}	
	}

	return 0;
}