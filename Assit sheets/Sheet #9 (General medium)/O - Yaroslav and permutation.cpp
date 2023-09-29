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
	int size, arr[100];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	bool check = true;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			check = false;
			break;
		}
	}

	if (check)
	{
		cout << "YES";
	}
	else
	{
		int freq[10000] = { 0 }, max = 0;

		for (int i = 0; i < size; i++)
		{
			freq[arr[i]]++;
		}

		for (int i = 0; i < 10000; i++)
		{
			if (max < freq[i])
			{
				max = freq[i];
			}
		}

		if (size % 2 == 0)
		{
			if (max > size / 2)
			{
				cout << "NO";
			}
			else
			{
				cout << "YES";
			}
		}
		else
		{
			if (max > size / 2 + 1)
			{
				cout << "NO";
			}
			else
			{
				cout << "YES";
			}
		}

	}
}