#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;cin>>n; 
while (n--)
{
   int x,y;cin>>x>>y; 
   int oddsum = 0; 

   int start = min(x,y); 
   int end = max(x,y); 

   for (int i = start+1; i < end; i++)
   {
    if(i%2!=0)
    {
        oddsum+=i; 
    }
   }
   cout<<oddsum<<endl; 
   
}



return 0;
}