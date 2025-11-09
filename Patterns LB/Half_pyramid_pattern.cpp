#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //outer loop
    for(int r=0;r<n;r++)
    {
        //Inner loop -colmns
        for(int c=0;c<r+1;c++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }

    return 0;
}