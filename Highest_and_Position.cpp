#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
int x; 
while (cin>>x)
{
    v.push_back(x);/* code */
}
int mx = *max_element(v.begin(),v.end());
cout<<mx<<endl<<v[mx]; 






return 0;
}