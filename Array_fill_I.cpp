#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
    cin>>x; 
int arr[10]; 
arr[0]=x;
for (int i = 1; i <=10; i++)
{
    arr[i]= arr[i-1]*2;
}

for (int i = 0; i < 10; i++)
{
    cout<<"N"<<"["<<i<<"]"<<" = "<<arr[i]<<endl; 
}



return 0;
}