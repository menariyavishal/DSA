#include<iostream>
#include<vector>

using namespace std;


void insertionSort(vector<int> & arr)
{
    int n = arr.size();

    //outer loop from 1 to n-1
    for(int i =1;i<n;i++)
    {
        //key element
        int key = arr[i];
        //inner loop from i-1 to 0
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j]; // shift the element to the right
            j--;
        }
        arr[j+1] = key; // insert the key at the correct position
    }

}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11 , 45, 78, 34, 56, 89, 23};
    cout << "Unsorted array: \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    insertionSort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
// This code implements the Insertion Sort algorithm in C++. It sorts an array of integers in ascending order. The main function demonstrates the sorting process by printing the unsorted and sorted arrays.