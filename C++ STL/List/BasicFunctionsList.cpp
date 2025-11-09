#include<iostream>
#include<list>

using namespace std;

int main()
{

    //Creation of list..
    list<int> mylist;

    //Inserting elements into the list...push_back()
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    //.....push_front()..
    mylist.push_front(500);

    // pop_back()..
    mylist.pop_back();

    //pop_front()...
    mylist.pop_front();
    //10,20,30

    mylist.push_back(10);
    //10,20,30,10

    list<int>::iterator it = mylist.begin();

    cout<<"before removing "<<endl;
    while(it != mylist.end())
    {
        cout<< *it <<" ";
        it++;
    }cout<<endl;

    mylist.remove(10);

    list<int>::iterator it2 = mylist.begin();

    cout<<"after removing "<<endl;
    while(it2 != mylist.end())
    {
        cout<< *it2 <<" ";
        it2++;
    }cout<<endl;

    // cout<<mylist.front()<<endl;
    // cout<<mylist.back()<<endl;

    // mylist.clear();
    // cout<<mylist.size()<<endl;

    // if(mylist.empty() == true)
    // {
    //     cout<<"List is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"Some elements are there"<<endl;
    // }








    return 0;
}