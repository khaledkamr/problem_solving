#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size, arr[100], result = 0;
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		result = size;
		int i = 0, z = 0;

		while (true)
		{
			if (z == size - 1)
			{
				break;
			}

			if (arr[i] > arr[i + 1])
			{
				z++;
				i = z;
				continue;
			}

			result++;
			i++;

			if (i == size - 1)
			{
				z++;
				i = z;
			}
		}
		cout << result << endl;
	}

	return 0;
}