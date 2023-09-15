#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    int x;
    cin >> x;

    int a = 0;
    int b = 0;
    int i;

    for(i = 0; i < x; i++)
    {
        cin >> s;
        if(s == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if(a > b)
    {
        cout  << "Anton";
    }
    else if (a < b)
    {
        cout  << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;

}