#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool x, y, z;
    int sum, testcase, count = 0;
    cin >> testcase;
    while(testcase--)
    {
        cin >> x >> y >> z;
        sum = x + y + z;

        if(sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

