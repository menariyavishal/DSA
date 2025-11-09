#include<iostream>
using namespace std;


void NumricPalindrome(int n)
{
    //Outer loop
    for(int i =0;i<n;i++)
    {
        //Inner loop
       // For spaces
       for(int j=0;j<n-i-1;j++)
       {
        cout<<"  ";
       }
       for(int j=0;j<i+1;j++)
       {
        cout<<j+1<<" ";
       }
       for(int j=i;j>0;j--)
       {
        cout<<j<<" ";

       }
       cout<<endl;
    }
}






int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    NumricPalindrome(n);

    
    return 0;
}