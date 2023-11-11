#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<iomanip>
#include<vector>
#include<utility>
#include<unordered_set>
#include<climits>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

bool right(int x1, int y1, int x2, int y2, int x3, int y3)
{
	if ((x1 == x2 && y1 == y2)|| 
		(x1 == x3 && y1 == y3)|| 
		(x2 == x3 && y2 == y3))
	{
		return false;
	}

	int d1 = pow((x1 - x2), 2) + pow((y1 - y2), 2);
	int d2 = pow((x1 - x3), 2) + pow((y1 - y3), 2);
	int d3 = pow((x2 - x3), 2) + pow((y2 - y3), 2);

	vector<int> vec = { d1,d2,d3 };
	sort(vec.begin(), vec.end());
	d1 = vec.at(0);
	d2 = vec.at(1);
	d3 = vec.at(2);

	return d3 == d1 + d2;
}

int main()
{
	IOS;
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (right(x1, y1, x2, y2, x3, y3))
	{
		cout << "RIGHT";
	}
	else if (right(x1 - 1, y1, x2, y2, x3, y3)||
	         right(x1 + 1, y1, x2, y2, x3, y3)||
		     right(x1, y1 - 1, x2, y2, x3, y3)||
		     right(x1, y1 + 1, x2, y2, x3, y3)||
		     right(x1, y1, x2 - 1, y2, x3, y3)||
		     right(x1, y1, x2 + 1, y2, x3, y3)||
		     right(x1, y1, x2, y2 - 1, x3, y3)||
		     right(x1, y1, x2, y2 + 1, x3, y3)||
		     right(x1, y1, x2, y2, x3 - 1, y3)||
		     right(x1, y1, x2, y2, x3 + 1, y3)||
		     right(x1, y1, x2, y2, x3, y3 - 1)||
		     right(x1, y1, x2, y2, x3, y3 + 1))
	{
		cout << "ALMOST";
	}
	else
	{
		cout << "NEITHER";
	}
}