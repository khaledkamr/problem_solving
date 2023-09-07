#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	double n;

	cin >> n;

	int i = n;
	double r = n - i;

	if (r > 0)
	{
		cout << "float " << i << " " << r;
	}
	else if (r == 0)
	{
		cout << "int " << i;
	}



	return 0;
}