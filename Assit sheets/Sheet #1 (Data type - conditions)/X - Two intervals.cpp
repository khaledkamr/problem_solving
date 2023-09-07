#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	long long l1, r1, l2, r2;

	cin >> l1 >> r1 >> l2 >> r2;

	if (max(l1, l2) > min(r1, r2))
	{
		cout << -1;
	}
	else
	{
		cout << max(l1, l2) << " " << min(r1, r2);
	}




	return 0;
}