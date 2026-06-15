#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2;
    int x;

    while(true)
    {
        int count = 0;
        double sum = 0;

        while(count < 2)
        {
            double n;
            cin >> n;

            if(n < 0 || n > 10)
            {
                cout << "nota invalida" << endl;
            }
            else
            {
                sum += n;
                count++;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << sum / 2 << endl;

        while(true)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;

            if(x == 1 || x == 2)
                break;
        }

        if(x == 2)
            break;
    }

    return 0;
}