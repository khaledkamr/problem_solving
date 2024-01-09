#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x;
	int size, count = 0;
	
	cin >> size >> x;

	for (int i = 0; i < size - 1; i++)
	{
		if (x[i] == x[i + 1])
		{
			count++;
		}
	}
	
	cout << size - count;

	return 0;
}