#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<iomanip>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main() 
{
	IOS;
	double l, s1, s2, Q;
	cin >> l >> s1 >> s2 >> Q;

	for (int i = 0; i < Q; i++)
	{
		double q;
		cin >> q;
		double time = sqrt(2) * (l - sqrt(q)) / (s2 - s1);
		cout << fixed << setprecision(6) << abs(time) << endl;
	}
}