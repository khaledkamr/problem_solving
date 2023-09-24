#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	int size;
	string code, decode;
	cin >> size >> code;
	int s = size;

	for (int i = 0; i < size; i++)
	{
		if (s % 2 == 0)
		{
			decode = code[i] + decode;
		}
		else
		{
			decode += code[i];
		}
		s--;
	}
	cout << decode;
}