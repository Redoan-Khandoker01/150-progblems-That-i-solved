#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b; 
 cin>>a>>b; 

 
int mn = min(a,b); 
int mx = max(a,b); 
int oddsum = 0; 
 
for (int i = mn+1; i <mx; i++)
{
    if(i%2!=0)
    {
        oddsum= oddsum+i; 
    }
}
cout<<oddsum<<endl; 


return 0;
}