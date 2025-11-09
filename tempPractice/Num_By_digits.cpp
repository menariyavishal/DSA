#include<iostream>
using namespace std;

int createdNumberByDigits(int numLength)
{
    int num = 0;

    for(int i=0; i<numLength; i++)
    {
        cout<<"Enter digit: ";
        int digit;
        cin>>digit;

        num = num*10 + digit;
        cout<<"Number created so far: "<<num<<endl;
    }
    
    return num;
}

int main()
{
    int numLength ;
    cout<<"Enter the length of the number: ";
    cin>>numLength;

    int ans = createdNumberByDigits(numLength);

    cout<<"Number created by digits: "<<ans<<endl;




    return 0;
}