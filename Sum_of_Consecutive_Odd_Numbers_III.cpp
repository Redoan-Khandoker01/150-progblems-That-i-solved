#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin>>n; 
while (n--)
{
    int x,y; 
    cin>>x>>y; 

    int sum=0; 
    int count = 0; 
    while (count<y)
    {
        if(x%2!=0)
        {
            sum+=x; 
            count++; 
        }
        x++; 
    }
    cout<< sum<<endl; 
}



return 0;
}