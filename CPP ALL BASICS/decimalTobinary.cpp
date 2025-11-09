#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;

int decimalTobinary(int n)
{
    int bit;
    int deci = 0;
    while(n>1)
    {
        bit =n%2;
        deci = deci + bit*10;
        n = n/2;


    }
    return deci;
}

string bitWiseMethod(int n)
{
    string binary = "";
    if(n ==0)
    {
        return "0";
    }

    while(n>0)
    {
        int bit = n & 1;
        binary.push_back('0' + bit);
        n = n >> 1;
    }

    reverse(binary.begin(),binary.end());
    return binary;
}








 int main()
 {
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<bitWiseMethod(n)<<endl;

    return 0;
 }