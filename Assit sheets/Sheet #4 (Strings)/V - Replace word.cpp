#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x;
	cin >> x;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'E' &&
			x[i+1] =='G' && 
			x[i+2] == 'Y' && 
			x[i+3] == 'P' && 
			x[i+4] == 'T')
		{
			i += 4;
			cout << " ";
		}
		else
		{
			cout << x[i];
		}
	}  

	return 0;
}