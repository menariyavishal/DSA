#include<iostream>
using namespace std;


void HollowPyramid(int n)
{
    //Adding some more condition in Full Pyramid


    
    for(int r =0;r<n;r++)
    {
        //For spaces
        for(int c=0;c<n-r-1;c++)
        {
            cout<<" ";
        }

        //For stars
        for(int c=0;c<r+1;c++)
        {
            if(r==0 || r==n-1 || c==0 || c==r+1-1)
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
    cout<<"enter value of n"<<endl;
    cin>>n;

    HollowPyramid(n);
    return 0;
}