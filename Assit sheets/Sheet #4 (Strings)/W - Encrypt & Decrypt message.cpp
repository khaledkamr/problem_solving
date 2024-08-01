#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string x;
	int q;

	cin >> q >> x;

	if (q == 1)
	{
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < original.size(); j++)
			{
				if (x[i] == original[j])
				{
					x[i] = key[j];
					break;
				}
			}
		}

		cout << x;
		return 0;
	}
	else
	{
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < key.size(); j++)
			{
				if (x[i] == key[j])
				{
					x[i] = original[j];
					break;
				}
			}
		}

		cout << x;
		return 0;
	}
}