#include<bits/stdc++.h>
using namespace std;
int main()
{
int t; 
cin>>t; 
while (t--)
{
    int n; 
    cin>>n; 
    int mn = 1e9; int mx = 0; 
    for (int i = 0; i < n; i++)
    {   
        int h;
       
        cin>>h; 

        mn = min(h,mn); 
       mx = max(h,mx);
    
    }
        cout<<mx-mn+1<<endl; 
}



return 0;
}