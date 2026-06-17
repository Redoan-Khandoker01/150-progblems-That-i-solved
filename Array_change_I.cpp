#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[20]; 

    for(int i = 0; i < 20; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < 10; i++)
    {
        swap(v[i], v[19 - i]);
    }

    for(int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << v[i] << endl;
    }

    return 0;
}