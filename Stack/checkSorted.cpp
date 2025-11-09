#include<iostream>
#include<stack>
#include<limits.h>

using namespace std;

bool checkSorted(stack<int>&s, int element1)
{
    // base case
    if(s.empty())
    {
        // iska mtlb sare elements sorted h
        return true;
    }

    int element2 = s.top();
    s.pop();

    // 1 case mera
    if(element2 <= element1)
    {
        // iska mtlb aage check krr skte h
        return checkSorted(s,element2);
    }
    else
    {
        // sorted nhi h
        return false;
    }

}


int main()
{
    stack<int>s;
    s.push(10);
    s.push(30);
    s.push(30);
    s.push(40);
    s.push(50);

    int element1 = INT_MAX;

    cout<< checkSorted(s,element1)<<endl;


    



    return 0;
}