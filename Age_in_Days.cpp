#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n; 

    int  yer= n/365; 
    n= n%365; 
    cout<<yer<<" ano(s)"<<endl; 
    int mas = n/30;
    n= n%30;  
    cout<<mas<<" mes(es)"<<endl;  

    int day = n;
    cout<<day<<" dia(s)"<<endl; 

    
return 0;
}