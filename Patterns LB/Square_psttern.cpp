#include<iostream>
using namespace std;

int main()
{
    int side;
    cout<<"Enter the length of side of square"<<endl;
    cin>>side;


    for(int row=0;row<side;row++)
    {
        for(int col=0;col<side;col++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }

    return 0;
}