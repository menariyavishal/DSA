#include<iostream>
using namespace std;


void Fancy12(int n)
{
    //Outer loop
    for(int r=0;r<n;r++)
    {
        //Inner loop
        for(int c=0;c<2*r+1;c++)
        {
            //For even place--->print numbers
            if(c%2==0)
            {
                cout<<r+1<<" ";
            }
            else
            {
                cout<<"* ";
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
    Fancy12(n);
    return 0;
}