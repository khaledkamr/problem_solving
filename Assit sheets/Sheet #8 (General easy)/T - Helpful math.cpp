#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	string x;
	cin >> x;
	char nums[50];
	int index = 0;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] <= 51 && x[i] >= 49)
		{
			nums[index] = x[i];
			index++;
		}
	}
	sort(nums, nums + index);

	for (int i = 0; i < index; i++)
	{
		cout << nums[i];
		if (i != index - 1) cout << "+";
	}
}