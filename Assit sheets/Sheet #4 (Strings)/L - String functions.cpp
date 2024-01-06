#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int size, queries, l, r;
	string x, q;
	char c;
	
	cin >> size >> queries;
	cin >> x;

	while (queries--)
	{
		cin >> q;
		
		if (q == "pop_back")
		{
			x.pop_back();
		}
		else if (q == "front")
		{
			cout << x.front() << endl;
		}
		else if (q == "back")
		{
			cout << x.back() << endl;
		}
		else if (q == "sort")
		{
			cin >> l >> r;
			sort(x.begin() + min(l, r) - 1, x.begin() + max(l, r));
		}
		else if (q == "reverse")
		{
			cin >> l >> r;
			reverse(x.begin() + min(l, r) - 1, x.begin() + max(l, r));
		}
		else if (q == "print")
		{
			cin >> l;
			cout << x[l - 1] << endl;
		}
		else if (q == "substr")
		{
			cin >> l >> r;
			
			for (int i = min(l, r) - 1; i <= max(l, r) - 1; i++)
			{
				cout << x[i];
			}
			cout << endl;
		}
		else if (q == "push_back")
		{
			cin >> c;
			x.push_back(c);
		}
	}
	
	return 0;
}