#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string x;
		cin >> x;

		if (x.find("101") < x.size() || x.find("010") < x.size())
		{
			cout << "Good" << endl;
		}
		else
		{
			cout << "Bad" << endl;
		}
		
	}



	return 0;
}