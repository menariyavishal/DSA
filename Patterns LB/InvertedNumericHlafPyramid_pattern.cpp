#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    //Outer loop
    for(int r=0;r<n;r++)
    {
        //Inner loop
        for(int c=0;c<n-r;c++)
        {
            cout<<c+1<<" ";
        }
        cout<<endl;
    }

    return 0;
 }