#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

void nextSmallerElement(stack<int>&s,vector<int>&v, vector<int>&ans)
{
    int n = v.size();

    for(int i = n-1; i>=0; i--)
    {
        int element = v[i];

        // compare krna h stack ke top se
        // jb tk mujhe koi bda element milta h, tb tk pop krwate raho
        while(s.top() >= element)
        {
            s.pop();
        }

        // yha aaunga to sure mere stack ke top prr koi small element hoga
        // to use ans me store krlo, or element ko push krdo
        ans.push_back(s.top());
        s.push(element);
    }
}

void prevSmallerElement(stack<int>&s,vector<int>&v,vector<int>&ans)
{
    int n = v.size();
    // fark sirf itna h ki, yha hum array pr left to right hi traverse krr rahe h
    for(int i =0; i<n; i++)
    {
        int element = v[i];

        while(s.top() >= element)
        {
            s.pop();
        }

        // jb yha pahunchunga to stack ke top pr choota element hoga
        // use ans me store krlo
        ans.push_back(s.top());
        // element ko to stack me push krna hu h
        s.push(element);
    }
}

int main()
{
    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    stack<int>s;
    s.push(-1);
    vector<int>ans;
    
    // nextSmallerElement(s,v,ans);
    // // mera answer reverse order me hoga, to use reverse krna padega
    // reverse(ans.begin(),ans.end());

    prevSmallerElement(s,v,ans);

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    


    return 0;

}