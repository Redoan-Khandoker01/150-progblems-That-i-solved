#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    string name; 
    cin>>name;

    double salary, total_sells; 
    cin>>salary>>total_sells; 

    double fitnP= (total_sells *15) /100; 

    double nowbeton= salary+fitnP; 

    cout<<fixed<<setprecision(2); 
    cout<<"TOTAL = R$ "<<nowbeton<<endl;




return 0;
}