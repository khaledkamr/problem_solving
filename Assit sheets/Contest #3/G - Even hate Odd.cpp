#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t, size;
	cin >> t;

	while (t--)
	{
		cin >> size;
		int arr[size], count = 0, even = 0, odd = 0;

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}

		while (true)
		{
			if (odd == even)
			{
				cout << count << endl;
				break;
			}
			else if ((odd + even) % 2 != 0)
			{
				cout << -1 << endl;
				break;
			}
			else if (odd > even)
			{
				odd--;
				even++;
				count++;
			}
			else if (odd < even)
			{
				odd++;
				even--;
				count++;
			}
		}
	}

	return 0;
}