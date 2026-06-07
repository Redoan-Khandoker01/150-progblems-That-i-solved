#include<bits/stdc++.h>
using namespace std;
int main()
{


vector<double>n(6); 
for (int i = 1; i <=6; i++)
{
    cin>>n[i]; 

}
int poitibe = 0; 
for (int i = 1; i <=6; i++)
{
        if(n[i]>0)
        {
            poitibe++; 
        }

}
cout<<poitibe<<" valores positivos"<<endl; 



return 0;
}