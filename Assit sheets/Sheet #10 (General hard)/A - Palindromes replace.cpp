#include<iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
	string str;
	cin >> str;
	int size = str.size() - 1;

	for (int i = 0; i <= size; i++)
	{
		if (str[i] == '?')
		{
			if (str[size - i] != '?')
			{
				str[i] = str[size - i];
			}
			else if (i == size - i)
			{
				str[i] = 'a';
			}
			else
			{
				str[i] = 'a';
			}
		}
	}
	
	string rev = str;
	reverse(rev.begin(), rev.end());

	if (str == rev)
	{
		cout << str;
	}
	else
	{
		cout << -1;
	}
}
