#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	char c;
	int size, arr[26] = { 0 };

	cin >> size;

	for (int i = 0; i < size; i++)
	{
		
		cin >> c;
		arr[(int)c - 97]++;
	}
	for (int i = 0; i <= 25; i++)
	{
		while (arr[i] != 0)
		{
			cout << (char)(i + 97);
			arr[i]--;
		}
	}

	return 0;
}