#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
using namespace std;

int main()
{
	char row1[12] = { 'q','w','e','r','t','y','u','i','o','p','[',']' };
	char row2[11] = { 'a','s','d','f','g','h','j','k','l',';','\'' };
	char row3[10] = { 'z','x','c','v','b','n','m',',','.','/' };
	char shift;
	string str;
	cin >> shift >> str;

	if (shift == 'R')
	{
		for (int i = 0; i < str.size(); i++)
		{
			for (int j = 0; j < 12; j++)
			{
				if (str[i] == row1[j])
				{
					str[i] = row1[j - 1];
					break;
				}
			}
			for (int j = 0; j < 11; j++)
			{
				if (str[i] == row2[j])
				{
					str[i] = row2[j - 1];
					break;
				}
			}
			for (int j = 0; j < 10; j++)
			{
				if (str[i] == row3[j])
				{
					str[i] = row3[j - 1];
					break;
				}
			}
		}
		cout << str;
	}
	else if (shift == 'L')
	{
		for (int i = 0; i < str.size(); i++)
		{
			for (int j = 0; j < 12; j++)
			{
				if (str[i] == row1[j])
				{
					str[i] = row1[j + 1];
					break;
				}
			}
			for (int j = 0; j < 11; j++)
			{
				if (str[i] == row2[j])
				{
					str[i] = row2[j + 1];
					break;
				}
			}
			for (int j = 0; j < 10; j++)
			{
				if (str[i] == row3[j])
				{
					str[i] = row3[j + 1];
					break;
				}
			}
		}
		cout << str;
	}
}