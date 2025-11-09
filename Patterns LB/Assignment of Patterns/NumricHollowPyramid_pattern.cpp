#include<iostream>
using namespace std;


void NumericHollowPyramid(int n)
{
    for(int r=0;r<n;r++)
    {
        //Inner loop
        for(int c=0;c<r+1;c++)
        {
            if(r==0 || r==1 || r==n-1 || c==0  || c==n-1 || c==r)
            {
                cout<<c+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    NumericHollowPyramid(n);
    
    return 0;
}