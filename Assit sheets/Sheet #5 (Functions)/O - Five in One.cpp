#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int max(int arr[], int size)
{
	int max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int min(int arr[], int size)
{
	int min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int prime(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		bool prime = true;

		if (arr[i] <= 1)
		{
			continue;
		}

		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				prime = false;
			}
		}

		if (prime)
		{
			count++;
		}
	}

	return count;
}

int palindrome(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		int rev = 0, n;

		for (int num = arr[i]; num > 0; num /= 10)
		{
			n = num % 10;
			rev = (rev * 10) + n;
		}

		if (rev == arr[i])
		{
			count++;
		}
	}

	return count;
}

int max_divisors(int arr[], int size)
{
	int  maxcount, max;

	for (int i = 0; i < size; i++)
	{
		int count = 0;

		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				count++;
			}
		}

		if (i == 0)
		{
			maxcount = count;
			max = arr[i];
		}
		else if (maxcount < count)
		{
			maxcount = count;
			max = arr[i];
		}
		else if (maxcount == count && arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

int main()
{
	int size;
	cin >> size;
	int num[100];

	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	cout << "The maximum number : " << max(num, size) << endl;
	cout << "The minimum number : " << min(num, size) << endl;
	cout << "The number of prime numbers : " << prime(num, size) << endl;
	cout << "The number of palindrome numbers : " << palindrome(num, size) << endl;
	cout << "The number that has the maximum number of divisors : " << max_divisors(num, size) << endl;

	return 0;
}