#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>age; 
int x; 
float avr=0; 
while (cin>>x)
{
   if(x<0)
        break;
    age.push_back(x); 
}

for (int i = 0; i < age.size(); i++)
{
    avr = avr+age[i];

}
cout<<fixed<<setprecision(2); 
cout<<avr/age.size()<<endl; 



return 0;
}