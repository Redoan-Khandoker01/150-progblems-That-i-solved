#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y; 
cin>>x>>y; 
int sumx= 0; 
int mn = min(x,y); 
int mx = max(x,y); 

for (int i = mn; i <=mx; i++)
{
    if(i%13!=0)
    {
        sumx+=i; 
    }
}
cout<<sumx<<endl;







return 0;
}