#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> fib;

    long long a = 1, b = 1;

    fib.push_back(1);

    if (n > 1)
        fib.push_back(1);

    for (int i = 3; i <= n; i++) {
        long long c = a + b;
        fib.push_back(c);
        a = b;
        b = c;
    }

    reverse(fib.begin(), fib.end());

    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << fib[i];
    }

    cout << '\n';

    return 0;
}