#include<iostream>
using namespace std;

int main()
{
    long long int x;
    long long int t;

    cin >> x;

    if(x%5 == 0)
    {
        t = x / 5;
    }
    else
    {
        t = (x/5) + 1;
    }

    cout << t << endl;
    return 0;
}