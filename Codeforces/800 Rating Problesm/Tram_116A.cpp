#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 0, s = 0, v = 0;
    
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        v = b - a;
        s += v;
        c = max(c, s);
       
    }
     cout << c << endl;
    return 0;
}