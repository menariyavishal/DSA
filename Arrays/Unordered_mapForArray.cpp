#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
    // Declaring an unordered_map
    unordered_map<int ,int> map;

    // Inserting elements in the map
    map[1] = 10; // Key = 1 , Value = 10
    map[2] = 20;
    map[3] = 30;
    map[4] = 40;

    map[1] = 100;

    // Accessing the elements of the map
    unordered_map<int,int>::iterator it = map.begin();
    for(it = map.begin(); it != map.end(); it++)
    {
        cout<<"Key: "<<it->first<<" Value: "<<it->second<<endl;
    }

    // for(auto x: map)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }  
    
    // Finding an element in the map
    if(map.find(2) != map.end())
    {
        int value = map.at(2);
        cout<<"Element found" <<value<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

    // Erasing an element from the map
    map.erase(2);
    cout<<"After erasing the element"<<endl;

    for(it = map.begin(); it != map.end(); it++)
    {
        cout<<"Key: "<<it->first<<" Value: "<<it->second<<endl;
    }

    if(map.find(2) != map.end())
    {
        int value = map.at(2);
        cout<<"Element found" <<value<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }







    return 0;
}