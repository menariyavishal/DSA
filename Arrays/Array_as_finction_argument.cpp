#include<iostream>
using namespace std;

void InputAndOutput(int arr[],int size)
{
    //Taking input by for loop
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value at index:"<<i<<endl;
        cin>>arr[i];
    }

    //Printng the array
    for(int i=0;i<size;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
}

// Array are always passed by REFERENCE 

int main()
{
    int arr[10];
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;

    InputAndOutput(arr,size);
    return 0;
}