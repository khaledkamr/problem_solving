#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (x - y >= 0)
	{
		cout << x - y;
	}
	else
	{
		cout << 0;
	}

	return 0;
}