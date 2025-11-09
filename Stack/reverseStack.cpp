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

void reverseStack(stack<int>&s)
{
    // base case
    if(s.empty()) return;

    // 1 case mera
    int topE = s.top();
    s.pop();
    // baki rec
    reverseStack(s);
    //backtrack
    insertAtBottom(s,topE);
}

void print(stack<int>&s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    print(s);



    return 0;
}