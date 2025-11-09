#include<iostream>
#include<climits>

using namespace std;


void minInArray(int arr[],int size,int index,int &mini)
{
    //base case
    if(index == size)
    {
        return;
    }

    //recursive call
    // 1 case mera
    mini = min(mini,arr[index]);

    minInArray(arr,size,index+1,mini);
}




int main()
{
    int arr[] = {37, 92 ,5, 18, 74, 46, 60, 83, 29, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int index =0;
    int mini = INT_MAX;
    minInArray(arr,size,index,mini);

    cout<<"Max no -> "<<mini;
    





    return 0;
}