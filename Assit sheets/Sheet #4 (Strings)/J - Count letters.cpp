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

	sort(x.begin(), x.end());

	int count = 0, index = -1;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != x[i + 1])
		{
			count++;
		}
	}

	while(count--)
	{
		int occ = 0;
		index++;

		while (true)
		{
			if (x[index] != x[index+1])
			{
				occ++;
				break;
			}

			occ++;
			index++;
		}

		cout << x[index] << " : " << occ << endl;
	}
    
	return 0;
}