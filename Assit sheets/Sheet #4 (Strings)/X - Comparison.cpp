#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x, sub1, sub2;
	cin >> x;
	string str = x, smallstr = x;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sub1 += x[i];
		str.erase(0, 1);
		sub2 = str;
		
		sort(sub1.begin(), sub1.end());
		sort(sub2.begin(), sub2.end());

		smallstr = min(smallstr, sub1 + sub2);
	}
	cout << smallstr;
}