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
	ll eyes, mouths, bodies;
	cin >> eyes >> mouths >> bodies;

	if (eyes == 0 || bodies == 0)
	{
		cout << 0;
	}
	else if (mouths == 0)
	{
		cout << min(eyes / 2, bodies);
	}
	else if (eyes > mouths)
	{
		if (bodies > (eyes - mouths) / 2)
		{
			cout << min(bodies - (eyes - mouths) / 2, mouths) + (eyes - mouths) / 2;
		}
		else
		{
			cout << min(bodies, mouths);
		}
	}
	else
	{
		cout << min(min(eyes, mouths), bodies);
	}
}
