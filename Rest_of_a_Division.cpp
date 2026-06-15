#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int mn = min(x, y);
    int mx = max(x, y);

    for (int i = mn+1; i < mx; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {

            cout << i << endl;
        }
    }

    return 0;
}