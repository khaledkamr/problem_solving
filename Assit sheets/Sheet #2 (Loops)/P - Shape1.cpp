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

	for (int i = x; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}