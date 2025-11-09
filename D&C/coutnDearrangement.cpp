#include<iostream>
using namespace std;

int dearrangement(int n)
{
    // base case
    if(n == 1) return 0;
    if(n == 2) return 1;

    return (n-1)*(dearrangement(n-1) + dearrangement(n-2));
}

int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int ans = dearrangement(n);
    cout<<ans<<endl;



    return 0;
}