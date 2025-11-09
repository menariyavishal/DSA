#include<iostream>
using namespace std;

int main()
{
    int length;
    int width;
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter width"<<endl;
    cin>>width;

    for(int r=0;r<length;r++)
    {
        for(int c=0;c<width;c++)
        {
            if(r==0||r==length-1)
            {
                cout<<"* ";
            }
            else
            {
                if(c==0||c==width-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
         cout<<endl;

    }


    return 0;
}