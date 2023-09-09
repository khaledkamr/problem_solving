#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int num = 1;

	for (int i = 0; i < x; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << num << " ";
			num++;
		}
		cout << "PUM" << endl;
		num++;
	}

	return 0;
}