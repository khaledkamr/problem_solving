#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	string A, B;
	cin >> A >> B;

	if (A.size() != B.size())
	{
		cout << "NO";
	}
	else if (A == B)
	{
		sort(A.begin(), A.end());
		
		for (int i = 0; i < A.size() - 1; i++)
		{
			if (A[i] == A[i + 1])
			{
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
	}
	else
	{
		int x, y, count = 0;
		bool gate = true;

		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] != B[i])
			{
				count++;
			}
			if (count == 1 && gate)
			{
				x = i;
				gate = false;
			}
			if (count == 2)
			{
				y = i;
				break;
			}
		}

		if (count == 2)
		{
			swap(A[x], A[y]);
			
			if (A == B)
			{
				cout << "YES";
			}
			else
			{
				cout << "NO";
			}
		}
		else
		{
			cout << "NO";
		}
	}
}