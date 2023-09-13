#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t, wid, hei;
	cin >> t;

	while (t--)
	{
		cin >> wid >> hei;

		if (wid == hei)
		{
			cout << "Square" << endl;
		}
		else
		{
			cout << "Rectangle" << endl;
		}
	}

	return 0;
}