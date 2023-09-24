#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	string sub1, sub2;
	cin >> sub1 >> sub2;

	if (sub1 == sub2) cout << -1;
	else cout << max(sub1.size(), sub2.size());
}