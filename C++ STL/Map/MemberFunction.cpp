#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{   
    // Creation
    unordered_map<string,string> table;

    // INsertion
    // method 1
    table["in"] = "India";

    // method 2
    table.insert(make_pair("raj","Rajasthan"));

    // method 3
    pair<string,string> p;
    p.first = "mum";
    p.second = "Mumbai";
    table.insert(p);

    if(table.count("raja") ==0)
    {
        cout<<"Key not found"<<endl;
    }
    if(table.count("raju") ==1)
    {
        cout<<"Key found"<<endl;
    }

    // if(table.find("raja") != table.end())
    // {
    //     cout<<"Key found"<<endl;
    // }
    // else{
    //     cout<<"Key not found"<<endl;
    // }

    // unordered_map<string,string>::iterator it = table.begin();

    // while(it != table.end())
    // {
    //     pair<string,string> p =*it;
    //     cout<<p.first<<" "<<p.second<<endl;
    //     it++;
    // }

    // cout<<table.size()<<endl;

    // table.clear();
    // cout<<table.size()<<endl;

    // if(table.empty()==true)
    // {
    //     cout<<"Map is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"Map is not empty"<<endl;
    // }





    return 0;
}