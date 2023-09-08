#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string n, n2;
	cin >> n;

	n2 = n;

	reverse(n2.begin(), n2.end());

	int count = 0;

	for (int i = 0; i < n2.size(); i++)
	{
		if (n2[i] == '0')
		{
			count++;
		}
		else
		{
			break;
		}
	}

	for (int j = count; j < n2.size(); j++)
	{
		cout << n2[j];
	}

	cout << endl;

	if (n == n2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}