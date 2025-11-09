#include<iostream>

using namespace std;



int fibonacci(int n)
{
   if(n==0 || n==1)
   {
        return n;
    }

    // Check for negative input
    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
        return -1; // Indicating an error for negative input
   }

    // Recursive call
    // fib(n) = fib(n-1) + fib(n-2)
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
    
}


int main()
{
    int n;
    cout << "Enter the term number (n) for Fibonacci sequence: ";
    cin >> n;

    fibonacci(n);

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    return 0;
}