#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	int n;
	cin >> n;
	vector<int> snack(n);
	vector<bool> freq(n + 1);
	int max = n;

	for (int i = 0; i < n; i++)
	{
		cin >> snack.at(i);
		freq.at(i) = false;
	}

	for (int i = 0; i < n; i++)
	{
		freq[snack[i]] = true;

		while (freq[max])
		{
			cout << max << " ";
			max--;
		}
		cout << endl;
	}
}