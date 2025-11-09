#include<iostream>
using namespace std;

void removeOccrance(string &full, string &part)
{
    while(full.find(part) != string::npos)
    {
        full.erase(full.find(part),part.length());
    }
}

int main()
{

    string full = "daabcbaabcbc";
    string part = "abc";
    cout<<full<<endl;
    removeOccrance(full,part);

    cout<<full<<endl;



    return 0;
}