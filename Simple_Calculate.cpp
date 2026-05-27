#include<bits/stdc++.h>
using namespace std;
int main()
{
double price1; 
int pc,pi; 
cin>>pc>>pi>>price1;

double price2; 
int pc2,pi2; 
cin>>pc2>>pi2>>price2;



double p1sum= pi*price1;
double p2sum= pi2*price2; 

double totalPrice = p1sum+p2sum; 

cout<<fixed<<setprecision(2); 
cout<<"VALOR A PAGAR: R$ "<<totalPrice<<endl; 

return 0;
}