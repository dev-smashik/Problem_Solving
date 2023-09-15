#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int test, count = 0, n, i;
    cin >> n;
    string s;
    cin >> s;
    //string s[n];
    
    for(int i = 1; i < n; i++)
        {
           /*
                if step by step store are same / duplicate then count++
           */
            if((s[i] == s[i - 1]))
            {
                count++;
            } 
           
        }


    cout << count << endl;
    return 0;    
}