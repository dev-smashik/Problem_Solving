// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, a, b, i;
//     cin >> s;

    
//     for(int i = 0; i < s.length(); i++)
//     {
//         a[i] = tolower(s[i]);
//         b[i] = toupper(s[i]);

//         if((a[i] == b[i]))
//         {
//             s[i] = tolower(s[i]);
//         }
//         else if(a[i] < b[i])
//         {
//             s[i] = toupper(s[i]);
//         }
//         else if (a[i] > b[i])
//         {
//             s[i] = tolower(s[i]);
//         }
//         cout << s[i];
//     }

   
//     return 0;

// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int up = 0;
//     int low = 0;
//     int i;

//     for(i = 0; i < s.size(); i++)
//     {
//         if(isupper(s[i]))
//         {
//             up++;
//         }
//         else
//         {
//             low++;
//         }
//     }


//     if(up > low)
//     {
//         char c;
//         for(i = 0; i < s.size(); i++)
//         {
//             c = toupper(s[i]);
//             cout << c;
//         }
//     }
//     else
//     {
//         char c;
//         for(i = 0; i < s.size(); i++)
//         {
//             c = tolower(s[i]);
//             cout  << c;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int u = 0;
    int l = 0;
    int i;

    for(i = 0; i < s.size(); i++)
    {
        if(isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }

    if(u > l)
    {
        for(i = 0; i < s.size(); i++)
        {
            char c;
            c = toupper(s[i]);
            cout << c;
        }
    }
    else
    {
        for(i = 0; i < s.size(); i++)
        {
            char c;
            c = tolower(s[i]);
            cout << c;
        }
    }

    return 0;
}