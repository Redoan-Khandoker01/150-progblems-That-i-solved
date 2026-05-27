#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int sum2 = 0;
    int gor = 0;
    int totalGor[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> totalGor[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (totalGor[i] % 2 == 0)
        {
            sum = sum + totalGor[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (totalGor[i] % 2 == 1)
        {
            sum2 = sum2 + totalGor[i];
        }
    }
    // if (sum > sum2)
    // {
    //     cout << sum << endl;
    // }
    // else
    // {
    //     cout << sum2 << endl;
    // }

    cout << sum<<endl<<sum2;

    return 0;
}