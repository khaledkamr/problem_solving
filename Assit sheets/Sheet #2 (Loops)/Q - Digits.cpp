#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n;
	string x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		reverse(x.begin(), x.end());

		for (int j = 0; j < x.size(); j++)
		{
			cout << x[j] << " ";
		}

		cout << endl;
	}

	return 0;
}