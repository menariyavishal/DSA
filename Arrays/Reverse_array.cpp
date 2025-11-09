#include<iostream>
#include<algorithm>
 using namespace std;

 int main()
 {
    //Method 1. Custom method by two pointer approach
    int arr[7] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int l = 0 , h = n-1;

    // while(l<h)
    // {
    //     swap(arr[l++],arr[h--]);
    // }

    // for(int i =0;i<n;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    //Method 2. STL C++ Library
    reverse(arr,arr+n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
 }