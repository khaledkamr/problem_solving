#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int L, P, count = 0;
	cin >> L >> P;

	while (L <= P)
	{
		L *= 3;
		P *= 2;
		count++;
	}

	cout << count;
}
