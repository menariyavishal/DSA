#include<iostream>

using namespace std;

bool checkPalindrome(string&s,int i, int j)
{
    //base case
    if(i >= j) return true;
    
    //ek case mera
    if(s[i] != s[j]) return false;

    //RE

    return checkPalindrome(s, i+1, j-1);
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    bool ans = checkPalindrome(s,0,s.size()-1);

    if(ans)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }



    return 0;
}