#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;

    string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        /*
            firstly we should check second string which is "+"
            and if second srting is ok then count++ / x++ otherwsie
            count-- / x--;
        */
        if(s[1] == '+')
        {
            x++;
        }

        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}