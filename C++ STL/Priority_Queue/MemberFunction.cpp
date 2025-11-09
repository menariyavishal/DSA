#include<iostream>
#include<queue>

using namespace std;

int main()
{

    // min-heap --> minimum value --> highest priority
    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(12);
    pq.push(45);
    pq.push(91);
    pq.push(55);
    //12,45,55,91

    cout<<pq.top()<<endl;








    // priority_queue<int> pq;
    // // max-heap --> max value --> highest priority

    // pq.push(10);
    // pq.push(51);
    // pq.push(21);
    // pq.push(75);
    // //75,51,21,10

    // // top element --> highest priority
    // cout<<pq.top()<<endl;
    // cout<<pq.size()<<endl;

    // // highest priority element pop hoga
    // pq.pop();
    // cout<<pq.size()<<endl;
    // cout<<pq.top()<<endl;

    // if(pq.empty()==true)
    // {
    //     cout<<"PQ is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"PQ is not empty"<<endl;
    // }






    return 0;
}