#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool x;

    cin >> t;
    while (t > 0)
    {
        cin >> x;

        if (x == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
        t--;
    }
    cout << "EASY" << endl;
    return 0;
}