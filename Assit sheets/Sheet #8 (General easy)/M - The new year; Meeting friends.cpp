#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int dis[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> dis[i];
    }

    sort(dis, dis + 3);
    int totalDis = (abs(dis[0] - dis[1])) + (abs(dis[1] - dis[2]));
    cout << totalDis;
}