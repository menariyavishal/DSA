#include<iostream>

using namespace std;

void printDigits(int n)
{
    //base case
    if( n ==0 )
    {
        return;
    }

    // head recursion : baki recursion ka
    int newNum = n/10;
    printDigits(newNum);

    // 1 case mera
    int digit = n % 10;
    cout<<digit<<" ";
}

int main()
{
    int num = 24347;

    printDigits(num);




    return 0;
}