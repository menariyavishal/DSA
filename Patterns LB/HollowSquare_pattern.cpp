#include<iostream>
using namespace std;
int main()
{
    int side;
    cout<<"Enter the side of square"<<endl;
    cin>>side;

    for(int r=0;r<side;r++)
    {
        for(int c=0;c<side;c++)
        {
            if(r==0||r==side-1||c==0||c==side-1)
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

    return 0;
}