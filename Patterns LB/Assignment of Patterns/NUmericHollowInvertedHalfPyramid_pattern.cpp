#include<iostream>
using namespace std;


void NumericHollowInvertd(int n)
{
    //Outer loop
    for(int r=0;r<n;r++)
    {
        //Inner loop
        for(int c=r+1;c<=n;c++)
        {
            if(r==0 || c==r+1 || c==n)
            {
                cout<<c<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}



// Another version
void invertedNumeric(int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(i==0 || i==n-1 || i==n-2 || j==0 || j==n-1 || i+j==n-1)
            {
                cout<<i+j+1<<" ";
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
    NumericHollowInvertd(n);

    
    
    return 0;
}