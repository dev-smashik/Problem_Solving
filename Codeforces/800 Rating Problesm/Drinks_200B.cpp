#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    double total;
    
    for(int i = 0; i < x; i++)
    {
        vector<int>n(x);
        cin >> n[i];
        
        total += n[i];
    }
    cout << (total / x) << endl;
    return 0;
}