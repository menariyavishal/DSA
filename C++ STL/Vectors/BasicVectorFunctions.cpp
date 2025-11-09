#include<iostream>
#include<vector>

using namespace std;

int main()
{

    // declaration of vectors.. with some blocks and value
    // vector<int> mark(5,-2);

    // //using the begin() function...which points to the first element of vector
    // cout<<*(mark.begin())<<endl;

    // //end() function
    // cout<<*(mark.end())<<endl;


    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    
    // Travering on vector using iterator..
    // Create a iterator..
    vector<int>::iterator it = first.begin();
    while(it != first.end())
    {
        cout<<*it<<" ";
        it++;
    }

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);
    // for(int i : first) 
    // {
    //     cout<<i<<" ";
    // }

    // vector<int> demo;
    // // insert elements
    // demo.push_back(10);
    // demo.push_back(20);
    // demo.push_back(30);
    // demo.push_back(40);

    // cout<<demo.size()<<endl;

    // //erased elements in a specified range..
    // demo.erase(demo.begin(),demo.end());
    // cout<<demo.size()<<endl;


    // inseted elements before a particular position..
    // demo.insert(demo.begin(),100);\
    // cout<<demo[0]<<endl;

    //delete all elements from the vector
    // demo.clear();

    // max number of blocks can assigned to a vector..
    // cout<<demo.max_size()<<endl;

    // reserced n number of blocks for the vector..
    // demo.reserve(20);

    //checkint the capacity if vector..
    // cout<<demo.capacity()<<endl;

    //printing elements by []-square brackets
    // cout<<demo[0]<<endl;

    // //printing elements by at() function
    // cout<<demo.at(0)<<endl;

    // cout<<"Size : "<<demo.size()<<endl;

    // // delete element
    // demo.pop_back();
    // cout<<"Size : "<<demo.size()<<endl;

    // //checking the vector is empty or not
    // if(demo.empty() == true)
    // {
    //     cout<<"vector is empty"<<endl;
    
    // }
    // else
    // {
    //     cout<<"vecotr is not empty"<<endl;
    // }

    // //front elemetn of vector
    // cout<<demo.front()<<endl;

    // //last element of vector
    // cout<<demo.back()<<endl;
    





    return 0;
}