#include<iostream>
using namespace std;

void InvertedHollowPyramid(int n)
{
   

    //Outer loop

    for(int r=0;r<n;r++)
    {
        //Inner loop for spaces
        for(int c=0;c<r;c++)
        {
            cout<<" ";
        }

        //Inner loop for stars
        for(int c=0;c<n-r;c++)
        {
            if(r==0 || r==n-1 || c==0 || c==n-r-1)
            {
                cout<<"* ";
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
    cout<<"Enter value"<<endl;
    cin>>n;
    InvertedHollowPyramid(n);
    return 0;
}