#include<iostream>
#include<queue>

using namespace std;

int main()
{


    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);
    cout<<first.front()<<" "<<first.back()<<endl;

    // queue<int> q;

    // q.push(10);
    // q.push(20);
    // q.push(12);
    // q.push(14);
    // //10,20,12,14

    // cout<<q.size()<<endl;

    // q.pop();
    // //20,12,14

    // cout<<q.size()<<endl;

    // cout<<"Front-> "<<q.front()<<endl;
    // cout<<"Back-> "<<q.back()<<endl;

    // if(q.empty() == true)
    // {
    //     cout<<"Queue is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"Queue is not empty"<<endl;
    // }




    return 0;
}