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

auto it = max_element(v.begin(),v.end()); 
cout<<*it<<endl; 
cout<<(it-v.begin()+1)<<endl; 








return 0;
}