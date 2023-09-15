#include<iostream>
using namespace std;
int main()
{
    int k , w, n, b = 0;
    cin >> k >> n >> w;
    for(int i = 0; i <= w; i++)
    {
        b = b +  i*k;
    }
    if(b == n || b < n)
    {
        cout << "0" << endl;
    }
    else
    {
        cout  << b - n << endl;
    }
    
    return 0;
}