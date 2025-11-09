#include<iostream>
#include<climits>

using namespace std;

void printOdd(int arr[],int size,int index)
{
    //base case
    if(index == size)
    {
        return;
    }


    //1 case mera
    // if(arr[index]%2==1)
    if(arr[index]&1 == 1)
    {
        cout<<arr[index]<<" ";
    }
    
    // baki recursion ka
    printOdd(arr,size,index+1);

}




int main()
{
    int arr[] = {37, 92 ,5, 18, 74, 46, 60, 83, 29, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int index =0;
    printOdd(arr,size,index);

  
    





    return 0;
}