#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x;
	cin >> x;
	
	int sum = 0;

	for (int i = 0; i < x.size(); i++)
	{
		sum += x[i] - '0';
	}
	
	cout << sum;

	return 0;
}