#include<iostream>
#include<vector>
using namespace std;

void bubbleSortAscd(vector<int>& arr)
{
    int n = arr.size();

    //Bubble Sort Algorithm
    for(int i =0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void bubbleSortDscd(vector<int>& arr)
{
    int n = arr.size();

    //Bubble Sort Algorithm
    for(int i =0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    cout << "Unsorted array: \n";
    for(int i =0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array ascending order: \n";
    bubbleSortAscd(arr);
    for(int i =0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Sorted array descending order: \n";
    bubbleSortDscd(arr);
    for(int i =0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}