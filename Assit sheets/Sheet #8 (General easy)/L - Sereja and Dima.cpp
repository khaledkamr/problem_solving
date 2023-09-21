#include <iostream>
using namespace std;

int main()
{
    int sereja = 0, dima = 0, cards[1000], n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    bool turn = true;
    int firstIndex = 0, lastIndex = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (turn)
        {
            if (cards[firstIndex] > cards[lastIndex])
            {
                sereja += cards[firstIndex];
                firstIndex++;
            }
            else
            {
                sereja += cards[lastIndex];
                lastIndex--;
            }
            turn = false;
        }
        else
        {
            if (cards[firstIndex] > cards[lastIndex])
            {
                dima += cards[firstIndex];
                firstIndex++;
            }
            else
            {
                dima += cards[lastIndex];
                lastIndex--;
            }
            turn = true;
        }
    }

    cout << sereja << " " << dima;
}