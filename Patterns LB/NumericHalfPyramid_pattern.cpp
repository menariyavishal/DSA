#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //Outer loop
    for(int r=0;r<n;r++)
    {
        //Inner loop
        
        for(int c=0;c<r+1;c++)
        {
            cout<<c+1<<" ";
            
        }
        // int num =1;
        // for(int c=0;c<r+1;c++)
        // {
        //     cout<<num<<" ";
        //     num++;
        // }
        cout<<endl;
    }

    return 0;
}