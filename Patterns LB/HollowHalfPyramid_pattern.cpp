#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int r=0;r<n;r++)
    {
        int totalcol = r+1;

        //Inner loop 

        for(int c=0;c<totalcol;c++)
        {
            if(r==0||r==1||r==n-1)
            {
                cout<<"* ";
            }
            else
            {
                //MIddle rows
                if(c==0||c==totalcol-1)
                {
                    cout<<"* ";
                }
                else
                {
                    //Middle colmns
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}