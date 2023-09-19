#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int rows, cells;
	cin >> rows >> cells;
	bool right = true;

	for (int i = 1; i <= rows; i++)
	{
		if (i % 2 == 0)
		{
			if (right)
			{
				for (int j = 1; j < cells; j++)
				{
					cout << ".";
				}

				cout << "#" << endl;
				right = false;
			}
			else
			{
				cout << "#";

				for (int j = 1; j < cells; j++)
				{
					cout << ".";
				}

				cout << endl;
				right = true;
			}
		}
		else
		{
			for (int j = 1; j <= cells; j++)
			{
				cout << "#";
			}

			cout << endl;
		}
	}
}
