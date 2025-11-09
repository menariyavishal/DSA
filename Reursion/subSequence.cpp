/*
    Sub-Sequence : -> we can include or exclude any character
                   -> not necessary to be continuous
                   -> make sure the order is maintained 
*/


#include<iostream>
#include<vector>

using namespace std;

void printAllSubSequence(string s,int i,string output,vector<string>&ans)
{
    //base case
    if(i == s.size())
    {
        // cout<<output<<endl;
        ans.push_back(output);
        return;
    }

    // 1 case mera
    char ch = s[i];
    //include ch
    printAllSubSequence(s,i+1,output + ch,ans);

    //exclude ch
    printAllSubSequence(s,i+1,output,ans);
}


int main()
{
    string str = "abc";
    string output = "";
    int index = 0;

    vector<string> ans;

    printAllSubSequence(str,index,output,ans);
    cout<<ans.size()<<endl;

    for(auto i:ans)
    {
        cout<<i<<endl;
    }




    return 0;
}