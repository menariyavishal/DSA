#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i =0;
    while(n>0)
    {
        int bit = n%10;
        int decimal = decimal + bit * pow(2,i++);
        n = n/10;
    }
    return decimal;
}

int main()
{
    // int binaryNo;
    // cin>>binaryNo;
    // cout<<binaryToDecimal(binaryNo)<<endl;
    cout<<~(5)<<endl;

    return 0;
}