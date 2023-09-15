#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int x;
        int i, c = 0;
        cin >> x;
        int a[100000];
        i = 0;
        for(i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < x; i++)
        {
            if(a[i] != a[i+1])
            {
                c++;
            }
        }
        cout << c << endl;
        return 0;
}