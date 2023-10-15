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
	ll eye, mouth, body, res = 0;
	cin >> eye >> mouth >> body;

	if (eye == 0 || body == 0)
	{
		cout<<0;
	}
	else
	{
		if ((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye)
		    || (mouth < body && mouth >= eye))
		{
			res = min (eye,body);
			cout<<res<<endl;
		} 
		else if(mouth < body && mouth < eye)
		{
			res = mouth;
			eye -= mouth;
			body -= mouth;
			res += min(eye/2, body);
			cout<<res;
		}
	}
}