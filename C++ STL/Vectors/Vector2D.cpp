#include<iostream>
#include<vector>

using namespace std;

int main()
{

    // Declaring a 2D array/vector..
    vector<vector<int>>arr(3,vector<int>(4,0));
    int totalRows = arr.size();
    int totalcol = arr[0].size();
    cout<<totalRows<<endl<<totalcol<<endl;

    // Jagged Array -- the number of cols for each row is different..
    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    for(vector<int>it : brr)
    {
        cout<<it.size()<<endl;
        
    }












    return 0;

}