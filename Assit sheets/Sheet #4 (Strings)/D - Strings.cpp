#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;
	
	cout << x.size() << " " << y.size() << endl;
	
	cout << x << y << endl;

	swap(x[0], y[0]);
	
	cout << x << " " << y;

	return 0;
}