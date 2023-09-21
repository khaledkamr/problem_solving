#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	int row, col, arr1[10] = { 0 }, arr2[10] = { 0 };
	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		string line;
		cin >> line;

		for (int z = 0; z < col; z++)
		{
			if (line[z] == 'S')
			{
				arr1[i] = 1;
				arr2[z] = 1;
			}
		}
	}

	int cells = 0;

	for (int i = 0; i < row; i++)
	{
		for (int z = 0; z < col; z++)
		{
			if (arr1[i] == 0 || arr2[z] == 0)
			{
				cells++;
			}
		}
	}

	cout << cells << endl;
}