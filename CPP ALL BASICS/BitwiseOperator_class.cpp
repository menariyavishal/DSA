#include<iostream>
using namespace std;

//1. Even and odd number by bitwise operator
void EvenOdd(int n)
{
    if((n&1)==0)
    {
        cout<<"Even number"<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }

}

//2.Count of setbits in a binary number {setbit--> number of 1 in a binary number}
void SetBit(int n)
{
    int setbit = 0;
    while(n!=0)
    {
        int lastbit = (n&1);
        if(lastbit==1)
        {
            setbit += 1;
        }
        n = n>>1;
        
    }
    cout<<"Set bit are : "<<setbit<<endl;
}

int main()
{
    int n;
    cout<<"Entr value of n"<<endl;
    cin>>n;
    // EvenOdd(n);
    SetBit(n);

    

    return 0;
}