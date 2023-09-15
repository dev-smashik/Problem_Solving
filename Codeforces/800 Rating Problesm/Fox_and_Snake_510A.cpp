#include<iostream>
using namespace std;

void solve()
{
    int x, y, total, i, j;
    cin >> x >> y;

    for(i = 0; i <= x; i++)
    {
        for(j = 0; j <= y; j++)
        {
            bool have_snake = false;
            if(i % 2 == 1)

            {
               have_snake = true;
            }
            else
            {
               if(i % 4 == 2)
               {
                have_snake = (j == y);
               }
               if(i % 4 == 0)
               {
                have_snake = (j == 1);
               }
            }

            cout << (have_snake ? "#" : ".");
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
