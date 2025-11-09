#include<iostream>
#include<cstring>
using namespace std;

// <-------------To take a whole line as input from the user-------->

int main()
{


    // int var;
    // cin>>var;
    // cin.ignore(); //<--------used to incounter next input functioc and store value into its desired variable--------->
    
    // string str;
    // cin>>str;

    // getline(cin,str);

    // cout<<str;
    // cout<<var;

    int num;
    cin>>num;

    if(cin.fail())
    {
        cout<<"error"<<endl;
    }
    else{
        cout<<num<<endl;
    }
    return 0;
}