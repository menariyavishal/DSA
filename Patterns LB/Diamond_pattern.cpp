#include<iostream>
using namespace std;


//Full Pyramid
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

//Invertd Full Pyramid

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

// Diamond = Full pyramid + Inverted Full Pyramid

void Diamond(int n)
{
    FullPyramid(n);
    InvertedFullPyramid(n);
}








int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    Diamond(n);

    return 0;
}