#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin>>n; 
for (int i = n; n!=1; i++)
{
    cout<<n<<" "; 
    if(n%2==0)
    {
        n= n/2;
    }
    else{
        n=3*n+1; 
    }
}
cout<<"1"; 
return 0;
}