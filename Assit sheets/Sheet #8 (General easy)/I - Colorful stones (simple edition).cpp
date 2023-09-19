#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main()
{
	string color, instruct;
	cin >> color >> instruct;
	int size = instruct.size(), pos = 1, c = 0;

	for (int i = 0; i < size; i++)
	{
		if (instruct[i] == color[c])
		{
			c++;
			pos++;
		}
	}

	cout << pos;
}
