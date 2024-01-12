#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x;
	int L = 0, R = 0, count = 0;
	int row = 0, col = 0;
	char arr[1000][1000];

	cin >> x; 

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'L')
		{
			arr[row][col] = x[i];
			L++;		
		}
		else if (x[i] == 'R')
		{
			arr[row][col] = x[i];
			R++;
		}

		col++;

		if (L == R)
		{
			count++;
			row++; col = 0;
			L = 0; R = 0;
		}	 
	}

	cout << count << endl;

	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}