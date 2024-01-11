#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x, y;
	int count = 0;

	getline(cin, x);

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != 32 &&x[i] != '!' && x[i] != '.' && x[i] != '?' && x[i] != ',')
		{
			y += x[i];
		}
		if ((x[i] == 32 || x[i] == '!' || x[i] == '.' || x[i] == '?' || x[i] == ',' || i == x.size() - 1) && y.size() != 0)
		{
			count++;
			y = "";
		}
	}

	cout << count << endl;

	return 0;
}