#include<iostream>
#include<vector>

using namespace std;


void selectionSort(vector<int> & arr)
{
    int n = arr.size();

    //outer loop from 0 to n-1
    for(int i =0; i<n-1;i++)
    {
        int minIndex = i; // assume the first element is the minimum
        //inner loop from i+1 to n-1
        for(int j =i+1;j<n;j++)
        {
            //if the current element is less than the minimum, update minIndex
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }

           
        }
         //swap minIndex with ith index
         swap(arr[i],arr[minIndex]);

    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Unsorted array: \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    selectionSort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}