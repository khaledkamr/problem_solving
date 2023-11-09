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

int main()
{
	int size, flag = 0;
	cin>>size;
	vector<int> arr(size);
	vector<int> v;

	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		
		if(arr[i] == 0 || arr[i] == 100)
		{
			v.push_back(arr[i]);
		} 
		else if(arr[i] >=1 && arr[i] <=9 && !flag)
		{
			v.push_back(arr[i]);
			flag = 1;
		}
	}
	
	if(flag)
	{
		for(int i=0;i<size;i++)
		{
			if(arr[i] >=10 && arr[i] < 100 && arr[i] % 10 == 0)
			{
				v.push_back(arr[i]);
				break;
			}
		}
	} 
	else
	{
		for(int i=0;i<size;i++)
		{ 
			if(arr[i] >=10 && arr[i] < 100)
			{
				v.push_back(arr[i]);
				break;
			}
		}
	}
	
	cout<<v.size()<<endl;
	
	for(int i=0;i<v.size();i++)
	{ 
		cout<<v[i]<<" ";
	}
}