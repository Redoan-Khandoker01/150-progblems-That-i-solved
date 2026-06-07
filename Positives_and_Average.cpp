#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<double>v; 
double x; 
int positive=0; 
double ave=0;
while (cin>>x)
{
    v.push_back(x); 

}
for (int i = 0; i <v.size(); i++)
{
if(v[i]>0)
{
    positive++;
    ave= ave+v[i];  
}

}
cout<<positive<<" valores positivos"<<endl; 
cout<<fixed<<setprecision(1); 
cout<<ave/positive<<endl; 
 


return 0;
}