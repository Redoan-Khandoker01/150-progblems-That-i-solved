#include<bits/stdc++.h>
using namespace std;
int main()
{
float a = 0; 

for (int i = 1; i <=39; i++)
{
    a= a+(2*i - 1)/pow(2,i-1); 
}
cout<<fixed<<setprecision(2)<<a<<endl; 

//(2*i - 1)  bijor digit ber korar jonno 
// pow(2, i-1); jor digit ber korar jonoo



return 0;
}