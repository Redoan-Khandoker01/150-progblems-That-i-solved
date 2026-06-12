#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n; 

while (1)
{
   cin>>n>>m; 
int sum = 0; 
    
    if(m<=0 || n<=0)
        break;

   int mn = min(m,n); 
   int mx = max(m,n); 
   
   for (int i = mn; i <=mx; i++)
   {
     cout<<i<<" "; 
        sum+=i; 
        
   }
   cout<<"Sum="<<sum<<endl; ; 
}



return 0;
}