#include<bits/stdc++.h>
using namespace std;
int main()
{
int person,hour;
double salary; 
cin>>person>>hour>>salary; 

double salarys= hour*salary; 

cout<<fixed<<setprecision(2); 
cout<<"NUMBER = "<<person<<endl; 
cout<<"SALARY = U$ "<<salarys<<endl;




return 0;
}