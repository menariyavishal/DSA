#include<iostream>
using namespace std;






int main()
{
    //Taking input col wise
    int arr[3][3];
    cout<<"Enter values for 2D array"<<endl;
    for(int col=0;col<3;col++)
    {
        for(int row=0;row<3;row++)
        {
            cin>>arr[col][row];
        }
    }
    for(int col=0;col<3;col++)
    {
        for(int row=0;row<3;row++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}