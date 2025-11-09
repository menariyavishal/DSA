 #include<iostream>
 #include<vector>
 using namespace std;

//  void print(vector<int>v)
//  {
//     int size = v.size();

//     cout<<"Printing elements:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         // cout<<v[i]<<" ";
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     cout<<"front element:"<<v[0]<<" End element:"<<v[v.size()-1];cout<<endl;
//     cout<<"front element:"<<v.front()<<" End element:"<<v.back();
//  }

void print2(vector<int>v)
{
    cout<<"Printing of elemnets method 2:"<<endl;
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}

 int main()
 {
    // Declarration of vector array
    vector<int>v;

    //Inserting of elements in vector arry
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    vector<int>arr(v);
    print2(arr);
    // v.clear();
    // print(v);

    // Printng capacity and size of vector
    // cout<<"Capacity:"<<v.capacity()<<"  size:"<<v.size()<<endl;


    // //Deleting one element from the vector using pop_back --> poping takes place from the end..
    // v.pop_back();
    // print(v);
    // v.pop_back();
    // print(v);

   




    return 0;
 }
