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
	double n, product = 0;
	cin >> n;
	vector<ll> vec(n);
	vector<ll>::iterator it;

	for (int i = 0; i < n; i++)
	{
		cin >> vec.at(i);
	}

    for(it = vec.begin(); it < vec.end(); it++)
    {
        product += log10(*it);
    }

	cout << (ll)ceil(pow(10, product / n));
}