#include<bits/stdc++.h>
using namespace std;
int main()
{
double  t;
cin>>t; 
while (t--)
{
    double x,y; 
    cin>>x>>y; 
    if(y==0 )
    {
        cout<<"divisao impossivel"<<endl;
    }
    else{
        double div = x/y;
    cout<<fixed<<setprecision(1)<<div<<endl;  
    }
   
  
}



return 0;
}