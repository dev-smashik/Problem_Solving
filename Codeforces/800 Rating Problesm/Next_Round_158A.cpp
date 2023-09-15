#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        /*
        check if total number of "N" -> "arr[i]" participant point and the "K" participant 
        position number "arr[k-1]" equal to other participant numbers then they are count for next
        round but remember every number should be positive which is greater then 0.
        then Count++.
        */
        if((arr[i] >= arr[k-1]) && (arr[i] > 0))
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;

}