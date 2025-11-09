#include<iostream>
#include<vector>

#include<algorithm> // for std::sort

using namespace std;

void print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printV(vector<vector<int>> &arr)
{
    for(int i =0;i<arr.size();i++)
    {
        for(int j =0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}

bool myComp(int &a, int &b)
{
    return a > b; // Custom comparator for descending order
}

bool myCompFor1stIndex(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];  // Custom comparator for 1st index of vector of vector
}

int main()
{
    // 1 Custom comparator function to sort in descending order for normal vector

    // vector<int> arr = {64, 25, 12, 22, 11 , 45, 78, 34, 56, 89, 23};
    // cout<<"Without cusmtom comparator: \n";
    // sort(arr.begin() , arr.end());
    // print(arr);
    // cout<<"With custom comparator: \n";
    // sort(arr.begin() , arr.end(),myComp);
    // print(arr);


    // 2. Custom comparator for vector of vector
    vector<vector<int>> arr = {{1,23}, {2, 45}, {3, 12}, {4, 22}, {5, 11}, {6, 45}};
    cout << "Without custom comparator: \n";
    sort(arr.begin(), arr.end());
    printV(arr);
    cout << "With custom comparator: \n";
    sort(arr.begin(), arr.end(), myCompFor1stIndex);
    printV(arr);


    return 0;
}