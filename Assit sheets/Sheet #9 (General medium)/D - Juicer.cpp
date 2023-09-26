#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
using namespace std;

int main()
{
	int n, max, d, o, w = 0, count = 0;
	cin >> n >> max >> d;

	while (n--)
	{
		cin >> o;

		if (o <= max)
		{
			w += o;
		}
		if (w > d)
		{
			w = 0;
			count++;
		}
	}
	cout << count;
}