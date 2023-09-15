#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cin >> s;

    /*
        first of all we need to sort full word to identify 
        duplicate character if duplicate character filter out
        then ignore thes chatacters and count all number of 
        charcters and count them if count is odd then print
        "IGNORE HIM!" and if count is even then print 
        "CHAT WITH HER!"
    */
    sort(s.begin(), s.end()); // sorting algorithm
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i+1]) // ignore duplicate items and count++
        {
            count++;
        }
    }

    // conditions // 
    if(count % 2  == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}