#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int A, B, C;

    while (cin >> A >> B >> C)
    {

        // 1. normal
        cout << "A = " << A << ", B = " << B << ", C = " << C << "\n";

        // 2. right aligned (width 10)
        cout << "A = " << setw(10) << A
             << ", B = " << setw(10) << B
             << ", C = " << setw(10) << C << "\n";

        // 3. zero padded (width 10)
        cout << "A = " << setfill('0') << setw(10) << A
             << ", B = " << setfill('0') << setw(10) << B
             << ", C = " << setfill('0') << setw(10) << C << "\n";

        // reset fill to space
        cout << setfill(' ');

        // 4. left aligned (width 10)
        cout << "A = " << left << setw(10) << A
             << ", B = " << left << setw(10) << B
             << ", C = " << left << setw(10) << C << "\n";
    }

    return 0;
}
