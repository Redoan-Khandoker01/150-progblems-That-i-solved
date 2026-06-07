#include<bits/stdc++.h>
using namespace std;
int main()
{
int a; 
cin>>a; 
int b; 
cin>>b; 

double total_Km = a*b; 
double total_Liter = total_Km/12; 
cout<<fixed<<setprecision(3); 

cout<<total_Liter<<endl; 


return 0;
}