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
#include<unordered_set>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	int n, k;
	cin >> n >> k;
	string dist;
	int ascii = 97;

	for (int i = 0; i < k; i++)
	{
		dist += (char)ascii++;
	}

	string newPass = dist;
	
	while (newPass.size() <= n)
	{
		newPass += dist;
	}

	while (newPass.size() != n)
	{
		newPass.pop_back();
	}

	cout << newPass;
}
