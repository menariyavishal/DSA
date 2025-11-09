#include<iostream>
using namespace std;

int paintFence(int n,int k)
{
    // base case
    if(n == 1) return k;
    if(n == 2) return k + k*(k-1);

    int ans = (k-1) * (paintFence(n-1,k) + paintFence(n-2,k));

    return ans;
}

int main()
{
    int n,k;
    cout<<"Enter value of n and k: ";
    cin>>n>>k;

    int ans = paintFence(n,k);
    cout<<ans<<endl;



    return 0;
}