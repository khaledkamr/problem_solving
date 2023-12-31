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
	double n, log_product = 0;
	cin >> n;
	vector<ll> vec(n);
	vector<ll>::iterator it;

	for (int i = 0; i < n; i++)
	{
		cin >> vec.at(i);
	}

    for(it = vec.begin(); it < vec.end(); it++)
    {
        log_product += log10(*it);
    }

	cout << (ll)ceil(pow(10, log_product / n));
}

// product = A0 * A1 * A2 *...An
// x = new product
// x^n > product
// log10(x^n) > log10(product)
// n * log10(x) > log10(product)
// n * log10(x) > log10(A0 * A1 * A2 *...An)
// n * log10(x) > log10(A0) + log10(A1) +...log10(An)
// n * log10(x) > log_product
// log10(x) > log_product / n
// 10^log10(x) > 10^( log_product / n)
// x > 10^( log_product / n)
