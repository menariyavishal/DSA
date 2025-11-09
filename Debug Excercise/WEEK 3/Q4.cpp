// Debug the code.
#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    // int mid = 0 + size-1; // for odd length
    for(int i=0;i<size-1;i=i+2){
        // if(i == mid)
        // {
        //     arr[i] = arr[size-1];
        //     break;
        // }
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

    cout<<"Before:"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    swapAlternate(arr,n);
    
    cout<<"\nAfter: "<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}