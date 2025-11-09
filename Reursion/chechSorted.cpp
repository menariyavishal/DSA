#include<iostream>

using namespace std;


// Sorted in descending order
bool descSorted_or_not(int arr[],int size,int index)
{
    //base case
    if(index == size) return true;

    // mera kam
    if(arr[index] > arr[index-1]) return false;

    // bake recusion sambhal lega
    descSorted_or_not(arr,size,index+1);
}


// sorted in ascending order
// bool ascSorted_or_not(int arr[], int size,int index) 
// {
//     // base case
//     /*
//         if(index >= size-1)
//         {
//             return true;
//         } 
//      */

//      if (index==size) return true;

//     // ye mene solve kia h

//      /*   if(arr[index] > arr[index+1])
//         {
//             return false;
//         }
//     */
//    if(arr[index-1]>arr[index]) return false;

//     // baki recusion ka kam h

//     return sorted_or_not(arr,size,index+1);
 
// }


int main()
{
    int arr[] = {10,20,30,40,45,50,90};
    int arr1[] = {50,40,30,20,11,25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int index = 1;

    
    bool ans = descSorted_or_not(arr1,size1,index);
    if(ans)
    {
        cout<<"Sorted array:"<<endl;
    }
    else
    {
        cout<<"Not sorted array:"<<endl;

    }

    

    // bool ans = ascSorted_or_not(arr,size,index);
    // if(ans)
    // {
    //     cout<<"Sorted array:"<<endl;
    // }
    // else
    // {
    //     cout<<"Not sorted array:"<<endl;

    // }




    return 0;
}