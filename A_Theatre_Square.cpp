#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,a; 
cin>>n>>m>>a; 

long long nn = (n+a-1)/a;
long long mm = (m+a-1)/a; 

long long total_need = nn*mm; 

cout<<total_need<<endl; 


return 0;
}