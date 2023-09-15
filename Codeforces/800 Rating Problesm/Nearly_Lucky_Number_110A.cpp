#include <iostream>
using namespace std;

int main()
{
    long long s;
    cin >> s;

    int i, a = 0, b = 0;

    while(s != 0)
    {
        if (s % 10 == 4 || s % 10 == 7)
        {
            a+=1;
        }
        s/= 10;
    }

    if (a == 4 || a == 7)
    {
       cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}