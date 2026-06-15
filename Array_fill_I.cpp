#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n; 
int arr[10]; 
int sum=0; 
for (int i = 0; i <10; i++)
{
    
    
         arr[i]=n;
         n++; n=n*n;
    cout<<"N["<<i<<"]"<<" = "<<arr[i]<<endl; 
         
   
}



return 0;
}