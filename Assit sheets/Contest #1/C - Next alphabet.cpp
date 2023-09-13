#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	char c;
	cin >> c;

	if (c == 122)
	{
		cout << "a";
	}
	else if (c >= 97 && c < 122)
	{

		cout << char(c + 1);
	}

	return 0;
}