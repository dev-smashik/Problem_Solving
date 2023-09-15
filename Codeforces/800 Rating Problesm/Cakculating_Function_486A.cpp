#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int x;
    cin >> n;
    if(n % 2 == 0)
    {
        x = n / 2;
    }
    else
    {
        x = (n+1) / 2 * (-1);
    }

    cout  << x << endl;
    return 0;

    
}

/*
    Here is a more detailed explanation of the code:

    *The #include <bits/stdc++.h> line tells the compiler to include the standard C++ library, which contains all of the functions and data types that we need to write this program.
    *The using namespace std; line tells the compiler to use the names of all of the objects and functions in the std namespace without having to prefix them with std::. This is a common practice in C++ programming.
    *The int main() function is the entry point for all C++ programs. It is where the program starts executing.
    *The long long int n; line declares a variable called n of type long long int. This is a variable that can store very large integers.
    *The long long int x; line declares a variable called x of type long long int. This is a variable that will store the result of the calculation.
    *The cin >> n; line reads an integer from the user and stores it in the variable n.
    *The if (n % 2 == 0) line checks if the number stored in n is even. If it is, the else block is skipped.
    *The x = n / 2; line divides the number stored in n by 2 and stores the result in x.
    *The else block is executed if the number stored in n is odd.
    *The x = (n + 1) / 2 * (-1); line adds 1 to the number stored in n, divides the result by 2, and multiplies the result by -1. This is done to get the negative of the number stored in n.
    *The cout << x << endl; line prints the value of x to the console.
    *The return 0; line tells the compiler that the program has completed successfully.
    
    I hope this explanation is helpful. Please let me know if you have any other questions.
*/