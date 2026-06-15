#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int mn= min(a,b);
    int mx = max(a,b); 

    if (mx%mn== 0)
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;

    return 0;
}