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
	int n;
	cin >> n;
	vector<int> vect(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vect.at(i);
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << abs(vect.at(i) - vect.at(i + 1)) << " ";
			cout << abs(vect.at(i) - vect.back()) << endl;
		}
		else if (i == n - 1)
		{
			cout << abs(vect.at(i) - vect.at(i - 1)) << " ";
			cout << abs(vect.at(i) - vect.front()) << endl;
		}
		else
		{
			cout << min(abs(vect.at(i) - vect.at(i - 1)), abs(vect.at(i) - vect.at(i + 1))) << " ";
			cout << max(abs(vect.at(i) - vect.back()), vect.at(i) - vect.front()) << endl;
		}
	}
}