#include<bits/stdc++.h>
using namespace std;
int main()
{
int x; 

while (cin>>x && x!=0)
{
    if(x%2!=0)
        x++; 

int cut= 0; 
int sum = 0; 
while (cut<5)
{
    sum= sum+x; 
    x+=2;
    cut++; 
}
cout<< sum<<endl; 
}



return 0;
}