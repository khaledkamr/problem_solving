#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}