#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, x, y, a[200], i, count = 0;

    cin >> l;
    cin >> x;
    for(i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    cin >> y;
    for(i = x; i < x+y; i++)  
    {
        cin >> a[i];
    }

    sort(a, a+(x+y));

    for(i = 0; i < x+y; i++)
    {
       if(a[i] != a[i+1])
       {
            count++;
       }
    }

    if(count == l)
    
    {
        cout << "I become the guy." << endl; 
    }
    else
    {
        cout  << "Oh, my keyboard!" << endl;
    }
    return 0;
}