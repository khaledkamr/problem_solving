#include <iostream>
#define ll long long
using namespace std;

int main()
{
	int n, event, rec = 0, crimes = 0;
	cin >> n;

	while (n--)
	{
		cin >> event;

		if (event == -1)
		{
			if (rec == 0) crimes++;
			else rec--;
		}
		else rec += event;
	}
	cout << crimes;
}