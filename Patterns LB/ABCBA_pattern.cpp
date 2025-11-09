#include<iostream>
using namespace std;

void ABCBA(int n)
{
    //Outer loop
    for(int r=0;r<n;r++)
    {
        char ch ='A';
        //Inner loop
       
            // I part
            for(int c=0;c<r+1;c++)
            {
                cout<<ch<<" ";
                ch++;
            }
            
            
            //II part
            ch--;
            while(ch>'A')
            {
                ch--;
                cout<<ch<<" ";
            }
            
        cout<<endl;
        }
    }





int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    ABCBA(n);
    return 0;
}