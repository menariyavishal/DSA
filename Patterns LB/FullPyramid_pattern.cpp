#include<iostream>
using namespace std;

void FullPyramid(int n)
{
    
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
            cout<<"* ";

        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    FullPyramid(n);

    return 0;
}