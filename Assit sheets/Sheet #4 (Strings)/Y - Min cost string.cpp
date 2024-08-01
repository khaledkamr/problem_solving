#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	/*
	a b c d e f g h i j k l m n o p q r s t u v w x y z
	4 9 5 9 6 1 0 3 7 2 5 9 6 1 3 2 3 2 9 1 1 0 1 8 8 4
	*/
	string str;
	int cost[125]; 

	cin >> str;

	for (int i = 'a'; i <= 'z'; i++)
	{
		cin >> cost[i];
	}

	if (str[0] == '?') // ???def
	{
		char right; //d
		int index = 0;

		for (int i = 1; i < str.size(); i++)
		{
			if (str[i] == '?')
			{
				index++;
				continue;
			}
			else
			{
				right = str[i];
				break;
			}
		}

		if (index == str.size() - 1) // ??????
		{
			cout << "0" << endl;
			for (int i = 0; i < str.size(); i++)
			{
				cout << "a";
			}
			return 0;
		}

		int new_cost, min_cost = INT_MAX;
		char min_char; 

		for (int i = 'a'; i <= 'z'; i++)
		{
			new_cost = abs(cost[i] - cost[right]);

			if (new_cost < min_cost)
			{
				min_cost = new_cost;
				min_char = (char)i;
			}
		}

		for (int i = 0; i <= index; i++)
		{
			str[i] = min_char;
		}
	}

	if (str[str.size()-1] == '?') // abc???
	{
		char left; //c
		int index = str.size()-1;

		for (int i = str.size()-2; i >= 0; i--)
		{
			if (str[i] == '?')
			{
				index--;
				continue;
			}
			else
			{
				left = str[i];
				break;
			}
		}

		int new_cost, min_cost = INT_MAX;
		char min_char;

		for (int i = 'a'; i <= 'z'; i++)
		{
			new_cost = abs(cost[i] - cost[left]);

			if (new_cost < min_cost)
			{
				min_cost = new_cost;
				min_char = (char)i;
			}
		}

		for (int i = str.size()-1; i >= index; i--)
		{
			str[i] = min_char;
		}
	}

	for (int i = 1; i < str.size(); i++) // ab??ef
	{
		if (str[i] == '?')
		{
			char right; //e
			char left = str[i - 1]; //b
			int index = i;

			for (int j = i + 1; j < str.size(); j++)
			{
				if (str[j] == '?')
				{
					index++;
					continue;
				}
				else
				{
					right = str[j];
					break;
				}
			}

			int new_cost, min_cost = INT_MAX;
			char min_char;

			for (int j = 'a'; j <= 'z'; j++)
			{
				new_cost = abs(cost[left] - cost[j]) + abs(cost[j] - cost[right]);

				if (new_cost < min_cost)
				{
					min_cost = new_cost;
					min_char = (char)j;
				}
			}

			for (int j = i; j <= index; j++)
			{
				str[j] = min_char;
			}
		}
	}

	long long str_cost = 0;

	for (int i = 0; i < str.size() - 1; i++)
	{
		str_cost += abs(cost[str[i]] - cost[str[i + 1]]);
	}

	cout << str_cost << endl;
	cout << str << endl;

	return 0;
	
}