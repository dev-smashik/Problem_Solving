#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> num;
            if(num ==  1)
            {
                /*
                    for place 1 in the middle 
                    swapping row and column intill 1 get middle 
                    position row(i-3) and col(j - 3) and 
                    must use "abs" before summing
                */
                cout << abs(i - 3) + abs(j - 3) << endl;
                return 0;
            }
        }
    }
}