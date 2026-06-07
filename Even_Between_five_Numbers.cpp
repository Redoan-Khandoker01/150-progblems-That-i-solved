#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<int>v; 
int x; 
int total = 0;  
while (cin>>x)
{
      v.push_back(x); 

}
 
for (int i = 0; i < v.size(); i++)
{
     
    if(v[i]%2==0 )
        total++; 
}
cout<<total<<" valores pares"<<endl; 



return 0;
}