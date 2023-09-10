#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

void max(int arr[], int s)
{
	int max = arr[0];

	for (int z = 0; z <= s; z++)
	{
		if (max < arr[z])
		{
			max = arr[z];
		}
	}
	cout << max << " ";
}

int main()
{
	int t, size, arr[100], subarr[100];
	cin >> t;

	while (t--)
	{
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			int x = 0;

			for (int j = size - i; j > 0; j--)
			{

				for (int z = 0; z <= i; z++)
				{
					subarr[z] = arr[z + x];
				}

				x++;
				max(subarr, i);
			}
		}
		cout << endl;
	}

	return 0;
}