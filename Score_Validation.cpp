#include<bits/stdc++.h>
using namespace std;

int main()
{
    double score;
    double sum = 0;
    int count = 0;

    while(count < 2)
    {
        cin >> score;

        if(score < 0 || score > 10)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            sum += score;
            count++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << sum / 2 << endl;

    return 0;
}