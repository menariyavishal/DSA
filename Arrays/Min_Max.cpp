#include<iostream>
#include<limits.h>
using namespace std;

//Max no in the array
int findMax(int arr[],int size)
{
   

    int maxAns = INT_MIN;
    for(int i =0;i<size;i++)
    {
        maxAns = max(maxAns,arr[i]);
    }
    return maxAns;
}


//Min no in the array
int findMin(int arr[],int size)
{


    int minAns = INT_MAX;
    for(int i =0;i<size;i++)
    {
        minAns = min(minAns,arr[i]);
    }
    return minAns;
}

int main()
{
    int arr[20];
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
     for(int i=0;i<size;i++)
    {
        cout<<"Enter the value at index:"<<i<<endl;
        cin>>arr[i];
    }

    int max = findMax(arr,size);
    cout<<"Max value:"<<max<<endl;
    int min = findMin(arr,size);
    cout<<"Min value"<<min<<endl;


    return 0;
}