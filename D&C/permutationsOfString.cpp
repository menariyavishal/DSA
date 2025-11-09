#include<iostream>
#include<cstring>

using namespace std;

void permutationsOfString(string &str, int i)
{
    //base case
    if(/*i >= str.length()*/ i == str.length()-1)
    {
        cout<<str<<endl;
        return;
    }

    // 1 case mera , har dabbe(index) pr sare element ko moka dunga
    for(int j = i; j<str.length(); j++)
    {
        //moka dene ke liye mene swap kia tha
        swap(str[i],str[j]);

        // baki recursion dekh lega
        permutationsOfString(str,i+1);

        // backtraking
        swap(str[i],str[j]);
    }
}

int main()
{

    string str = "abc";
    int i = 0;

    permutationsOfString(str,i);



    return 0;
}