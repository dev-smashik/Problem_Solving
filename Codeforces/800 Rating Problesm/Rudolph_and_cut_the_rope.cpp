#include <iostream>
using namespace std;

void solve()
{
    int i, n, a, b, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}