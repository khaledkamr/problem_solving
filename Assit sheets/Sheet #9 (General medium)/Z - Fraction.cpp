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

int GCD(int a, int b)
{
	if (b == 0) return a;

	return GCD(b, a % b);
}

int LCM(int a, int b)
{
	return(a / GCD(a, b)) * b;
}

int main()
{
	IOS;
	string f1, f2;
	cin >> f1 >> f2; 

	int pos = f1.find('/');
	int den1 = stoi(f1.substr(pos + 1));
	int num1 = stoi(f1.erase(pos));

	pos = f2.find('/');
	int den2 = stoi(f2.substr(pos + 1));
	int num2 = stoi(f2.erase(pos));
	
	cout << LCM(num1, num2) << '/' << GCD(den1, den2);
}