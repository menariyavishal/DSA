#include<iostream>
using namespace std;

void InvertedFullPyramid(int n)
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
            cout<<"* ";
        }
        cout<<endl;
    }
}








int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    InvertedFullPyramid(n);
    return 0;
}