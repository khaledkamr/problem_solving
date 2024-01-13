#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string URL;
	cin >> URL;
	
	for (int i = URL.find('?') + 1; i < URL.size(); i++)
	{
		if (URL[i] == '=')
		{
			cout << ": ";
		}
		else if (URL[i] == '&')
		{
			cout << endl;
		}
		else
		{
			cout << URL[i];
		}
	}

	return 0;
}