#include<iostream>
#include<string>
#include<cstring>

using namespace std;

// M1 : Left to right
void lastCharLtoR(string&s, char ch, int i, int&ans)
{
    // Base case
    if(i>=s.size()) return;

    // ek case solve karo
    if(s[i] == ch)
    {
        ans = i;
    }

    lastCharLtoR(s,ch,i+1,ans);
}

// M2 : Right to left
void lastCharRtoL(string&s, char ch, int i, int&ans)
{
    // Base case
    if(i<0) return;

    // ek case solve karo
    if(s[i] == ch)
    {
        ans = i;
        return;
    }

    lastCharRtoL(s,ch,i-1,ans);
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    char ch;
    cout<<"Enter a char to check last occurance: ";
    cin>>ch;

    int ans = -1;

    // lastCharLtoR(s,ch,0,ans);
    // cout<<ans<<endl;

    // lastCharRtoL(s,ch,s.size()-1,ans);
    // cout<<ans<<endl;
    
    const char *occur = strrchr(s.c_str(), ch);     // c_str() -> returns [const char *] used when c functions and combined with c++
    
    if(occur != nullptr) {
        ans = occur - s.c_str();
        cout << "Last occurrence at index: " << ans << endl;
    } else {
        cout << "Character not found" << endl;
    }
   






    return 0;
}
