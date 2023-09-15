#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int Count_Vowels(string x, int indx, int count)
{
    int vowels[10] = { 'A','a','E','e','I','i','O','o','U','u' };

    for (int i = 0; i < 10; i++)
    {
        if (x[indx] == vowels[i])
        {
            count++;
            break;
        }
    }

    if (indx == x.size() - 1)
    {
        return count;
    }
    return Count_Vowels(x, ++indx, count);
}

int main()
{
    string str;
    getline(cin, str);
    cout << Count_Vowels(str, 0, 0);

    return 0;
}
