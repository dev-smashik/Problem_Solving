#include<iostream>
#include<string>
using namespace std;

int main()
{
    string x, y;
    cin>>x>>y;
    for(int i = 0; i < x.size();i++)
    {
        /*
            Lower case and Upper case doesn't matter
            thats way we pre define string for to lower
            even if it will upper string and lower string
            all of the string converted to lower String.
        */
        x[i] = tolower(x[i]);
        y[i] = tolower(y[i]);
    }
        /*
            if Checking two string are equal then print "0".
        */
    if(x==y)
    {
        cout <<"0" <<endl;
    }
    else
    {
        for(int i = 0; i < x.size(); i++)
        {
            /*
                if two strings are compare to if first string is
                greater then second string then print "1".
                if any comparing string found then instant break
                the loop no need to compare other characters.
            */
            if(x[i] > y[i])
            {
                cout << "1" << endl;
                break;
            }
            /*
                if two strings are compare to if first string is
                less then second string then print "-1".
                if any comparing string found then instant break
                the loop no need to compare other characters.
            */
            else if(x[i] <y [i])
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}