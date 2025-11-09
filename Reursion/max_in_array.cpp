#include<iostream>
#include<climits>

using namespace std;


void maxInArray(int arr[],int size,int index,int &maxi)
{
    //base case
    if(index == size)
    {
        return;
    }

    //recursive call
    // 1 case mera
    maxi = max(maxi,arr[index]);

    maxInArray(arr,size,index+1,maxi);
}




int main()
{
    int arr[] = {37, 92 ,5, 18, 74, 46, 60, 83, 29, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int index =0;
    int maxi = INT_MIN;
    maxInArray(arr,size,index,maxi);

    cout<<"Max no -> "<<maxi;
    





    return 0;
}