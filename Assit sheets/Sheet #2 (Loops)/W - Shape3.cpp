#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cpases = n - 1;
	int stars = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= cpases; j++)
		{
			cout << " ";
		}

		cpases--;

		for (int z = 1; z <= stars; z++)
		{
			cout << "*";
		}

		stars += 2;
		cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cpases++;

		for (int j = 1; j <= cpases; j++)
		{
			cout << " ";
		}

		stars -= 2;

		for (int z = 1; z <= stars; z++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}