#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int testcase;
    
    cin >> testcase;
    while(testcase--)
    {
        // input string 
        cin >> s; 

        // if string length is greater than 10 words
        if(s.length() > 10) 
        {
            // print s[0] means print first character of a word //

            /* print "s.length() - 2" means total number of words
                minus 2 words for showing localzation = l10n mode
                basically "s.length() - 2" used for middle word between
                first character and last character of a word.
            */

            // print "s[s.lenght()-1]" means print last character of a word //

            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        }
        else
        {
            /* else if string length is less then 10 word then print 
                whole string or word.    
            */
            cout << s << endl;
        }
    }

    return 0;

}