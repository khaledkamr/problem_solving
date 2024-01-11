#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, score = 0;
	string x;
	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		switch (x[i])
		{
		case 'V':
			score += 5;
			break;

		case 'W':
			score += 2;
			break;

		case 'X':
			x[i + 1] = 'P';
			break;

		case 'Y':
			x.push_back(x[i + 1]);
			x[i + 1] = 'P';
			n++;
			break;

		case 'Z':
			if (x[i + 1] == 'V')
			{
				score /= 5;
				x[i + 1] = 'P';
			}
			else if (x[i + 1] == 'W')
			{
				score /= 2;
				x[i + 1] = 'P';
			}
			break;
		}
	}

	cout << score;
	
	return 0;
}