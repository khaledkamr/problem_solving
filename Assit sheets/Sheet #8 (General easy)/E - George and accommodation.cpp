#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int n, Pi, Qi, count = 0;
	cin >> n;

	while (n--)
	{
		cin >> Pi >> Qi;

		if (Qi - Pi >= 2)
		{
			count++;
		}
	}

	cout << count;
}
