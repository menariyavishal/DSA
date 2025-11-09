#include<iostream>
using namespace std;




void Mixpyramid(int n)
{
    // Part 1--Upper half part

    for(int r=0;r<n;r++)
    {
        // I-stars
        for(int c=0;c<n-r;c++)
        {
            cout<<"*";
        }

        // II-sapces
        for(int c =0;c<2*r+1;c++)
        {
            cout<<" ";
        }

        // III-stars
        for(int c=0;c<n-r;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    // Part 2--Lower half part

    for(int r=0;r<n;r++)
    {
        // I-stars
        for(int c=0;c<r+1;c++)
        {
            cout<<"*";
        }

        // II-sapces
        for(int c =0;c<2*(n-r)-1;c++)
        {
            cout<<" ";
        }

        // III-stars
        for(int c=0;c<r+1;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n; 
    Mixpyramid(n);
    return 0;
}