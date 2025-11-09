#include<iostream>
#include<stack>

using namespace std;

int main()
{

    stack<int> first;
    stack<int> second;

    first.push(10);
    first.push(20);
    first.push(30);

    second.push(300);
    second.push(200);
    second.push(500);

    first.swap(second);
    cout<<first.top()<<endl;

    // stack<int> st;

    // st.push(10);
    // //10
    // st.push(20);
    // //10,20
    // st.push(30);
    // //10,20,30

    // cout<<st.size()<<endl;

    // st.pop();
    // //20,30
    // cout<<st.size()<<endl;

    // cout<<st.top()<<endl;

    // if(st.empty() == true)
    // {
    //     cout<<"Stack is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"Stack is not empty"<<endl;
    // }





    return 0;
}