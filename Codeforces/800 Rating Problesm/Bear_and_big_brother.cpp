// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b;

//     cin >> a >> b;
//     int count = 0;

//     while(a <= b)
//     {
//        a*=3;
//        b*=2;
//         count++;
//     }

//     cout  << count << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = 0; i < 1000; i++)
    {
        if (a <= b)
        {
            a = a * 3;
            b = b * 2;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}