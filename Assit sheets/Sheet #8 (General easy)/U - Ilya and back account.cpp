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
	string state, state2;
	cin >> state;

	if (state[0] != '-')
	{
		cout << state;
	}
	else
	{
		state2 = state;
		state.erase(state.size() - 1, 1);
		state2.erase(state2.size() - 2, 1);
		cout << max((ll)stoi(state), (ll)stoi(state2));
	}
}