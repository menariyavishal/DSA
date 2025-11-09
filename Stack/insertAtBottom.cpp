#include<iostream>
#include<stack>

using namespace std;


void insertAtBottom(stack<int>&s, int value)
{
    // base case
    if(s.empty())
    {
        s.push(value);
        return;
    }

    // 1 case mera, baki recursion dekh lega
    int topElement = s.top();
    s.pop();

    // baki recursion dekh lega
    insertAtBottom(s,value);

    //backtracking
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // traversing of stack
    // while(!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;

    int value = 25;

    insertAtBottom(s,value);

    // traversing of stack
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;



    return 0;
}