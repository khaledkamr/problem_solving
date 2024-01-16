#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x;
	int e = 0, g = 0, y = 0, p = 0, t = 0;
	int count = 0;

	cin >> x;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'e' || x[i] == 'E')
		{
			e++;
		}
		else if (x[i] == 'g' || x[i] == 'G')
		{
			g++;
		}
		else if (x[i] == 'y' || x[i] == 'Y')
		{
			y++;
		}
		else if (x[i] == 'p' || x[i] == 'P')
		{
			p++;
		}
		else if (x[i] == 't' || x[i] == 'T')
		{
			t++;
		}
	}
	
	while (e > 0 && g > 0 && y > 0 && p > 0 && t > 0)
	{
		count++;
		e--;
		g--;
		y--;
		p--;
		t--;
	}
	
	cout << count;

	return 0;
}