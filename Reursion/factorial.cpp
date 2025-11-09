#include<iostream>
using namespace std;

int getFactorial(int n)
{
    // base case
    if(n==0)
    {
        return 1; // 0! is 1
    }

    //recursive call
    // fact(n) = n * fact(n-1)
    //Big problem -> fact(n)
    // choti problem -> fact(n-1)
    
    int smallAns = getFactorial(n - 1);
    int ans = n * smallAns;
    return ans; // return the result of the factorial calculation
    
    // Note: The function does not handle negative integers as factorial is not defined for them.
    // process
}


int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int ans = getFactorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}