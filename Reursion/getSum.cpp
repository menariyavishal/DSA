#include<iostream>

using namespace std;

int getSum(int n)
{
    // base case
    if(n==1)
        return 1;

    // recursive call : -> sum(n) = sum(n-1) + n

    int ans = getSum(n-1) + n;

    //processing

    return ans;
    
}


int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    cout<<getSum(n);






    return 0;
}