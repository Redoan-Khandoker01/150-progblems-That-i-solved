#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v; 
int a[3]; 

int i = 0;
while (i<3)
{
    
   cin>>a[i]; 
   v.push_back(a[i]); 
   i++; 
}

sort(v.begin(),v.end()); 
for(int x: v)
{
    cout<<x<<endl; 
}
  cout<<endl; 

for (int i = 0; i <3; i++)
{
    cout<<a[i]<<endl; 
}





return 0;
}