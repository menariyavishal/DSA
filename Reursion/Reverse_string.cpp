#include<iostream>

using namespace std;

void reverseStringRE(string&s,int start,int end)
{
    //base case
    if(start >= end) return;

    // ek case mera
    swap(s[start],s[end]);

    // baki recursion ka
    reverseStringRE(s,start+1,end-1);


}

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    cout<<"Original: "<<endl;
    cout<<s<<endl;

    reverseStringRE(s,0,s.size()-1);

    cout<<"\nReversed: "<<endl;
    
    cout<<s<<endl;





    return 0;
}