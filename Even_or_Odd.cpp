#include<bits/stdc++.h>
using namespace std;
int main()
{
int n; 
cin>>n; 
vector<int> v(n); 

for (int i = 0; i <n; i++)
{
    cin>>v[i]; 
}

for (int i = 0; i <v[n]; i++)
{
    if(v[i]%2!=0 && v[i]<0 )
    {
        cout<<"ODD NEGATIVE"<<endl;
    }
    else if(v[i]<0 && v[i]%2==0 )
    {
        cout<<"EVEN NEGATIVE"<<endl; 
    }
    else if(v[i]==0)
    {
        cout<<"NULL"<<endl;
    }
    else if(v[i]%2!=0 && v[i]>0  )
    {
        cout<<"ODD POSITIVE"<<endl;
    }

}



return 0;
}