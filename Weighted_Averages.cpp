#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

while (n--)
{
    double a,b,c; 
    cin>>a>>b>>c; 

    double ave = (a*2+b*3+c*5)/10.0; 
    cout<<fixed<<setprecision(1)<<ave<<endl; 
}


    return 0;
}