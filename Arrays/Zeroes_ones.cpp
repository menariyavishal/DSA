#include<iostream>
 using namespace std;

void countZeroesAndOnes(int arr[],int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
    
        if(arr[i]==1)
        {
            oneCount++;
        }
    }
    cout<<zeroCount;
    cout<<oneCount;
}

 int main()
 {
    int arr[10];
    int size;
    cin>>size;
     for(int i=0;i<size;i++)
    {
        cout<<"Enter the value at index:"<<i<<endl;
        cin>>arr[i];
    }

    countZeroesAndOnes(arr,size);
    return 0;
 }