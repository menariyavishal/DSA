#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int r=0;r<n;r++)
    {
        // for(int c=0;c<n-r;c++)
        for(int c=n;c>r;c--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}