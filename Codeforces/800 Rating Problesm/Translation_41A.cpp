#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c1, c2;
    cin >> c1;
    cin >> c2;

    reverse(c1.begin(), c1.end());
    if(c1 == c2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
    
}