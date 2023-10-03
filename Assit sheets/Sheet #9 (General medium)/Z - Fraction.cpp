#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	string f1, f2;
	cin >> f1 >> f2; // 1/2  3/4

	int pos = f1.find('/');
	int num1 = stoi(f1.substr(pos - 1));
	int den1 = stoi(f1.substr(pos + 1));

	pos = f2.find('/');
	int num2 = stoi(f2.substr(pos - 1));
	int den2 = stoi(f2.substr(pos + 1));

	cout << max(num1, num2) << '/';

	if (den1 % 2 != 0 || den2 % 2 != 0)
	{
		cout << 1;
	}
	else
	{
		for (int i = 2; i <= min(den1, den2); i++)
		{
			if (den1 % i == 0 && den2 % i == 0)
			{
				cout << i;
				return 0;
			}
		}
	}
}