#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; 
    cin>>n; 

    long long a=0,b=1;
    long long fibonacci=0; 
    
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            cout<<a;
        }
        else if(i==1)
            cout<<" "<<b; 

        else{
            fibonacci = a+b;
            cout<<" "<<fibonacci;
            a=b; 
            b= fibonacci; 

        }
    }
    
    cout<<endl; 


    // int N;
    // cin >> N;

    // long long a = 0, b = 1;

    // for (int i = 0; i < N; i++) {
    //     if (i == 0) {
    //         cout << a;
    //     } 
    //     else if (i == 1) {
    //         cout << " " << b;
    //     } 
    //     else {
    //         long long c = a + b;
    //         cout << " " << c;
    //         a = b;
    //         b = c;
    //     }
    // }

    // cout << endl;
    return 0;
}