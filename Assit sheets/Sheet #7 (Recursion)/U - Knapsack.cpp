#include<iostream>
#define ll long long
using namespace std;

int Knapsack(int wi[], int vi[], int max_w, int n)
{
	if (max_w == 0 || n == 0)
	{
		return 0;
	}

	if (wi[n - 1] > max_w)
	{
		return Knapsack(wi, vi, max_w, n - 1);
	}
	else
	{
		return max(vi[n - 1] + Knapsack(wi, vi, max_w - wi[n - 1], n - 1),
			Knapsack(wi, vi, max_w, n - 1));
	}
}

int main()
{
	int n, w, wi[20], vi[20];
	cin >> n >> w;

	for (int i = 0; i < n; i++)
	{
		cin >> wi[i] >> vi[i];
	}

	cout << Knapsack(wi, vi, w, n);
}
