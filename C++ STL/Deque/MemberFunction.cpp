#include<iostream>
#include<queue>

using namespace std;


int main()
{
    // Creation
    deque<int> dq;

    // Insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    //10,20,30
    dq.push_front(100);
    //100,10,20,30
    dq.push_front(200);
    //200,100,10,20,30

    // Deletion

    dq.pop_back();
    //200,100,10,20

    deque<int>::iterator it = dq.begin();

    while(it != dq.end())
    {
        cout<<*it<<" ";
        it++;
    }

    // dq.pop_front();
    // //100,10,20
    // cout<<dq.size()<<endl;

    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // if(dq.empty()==true)
    // {
    //     cout<<"Deque is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"Deque is not empty"<<endl;
    // }


    




    return 0;
}