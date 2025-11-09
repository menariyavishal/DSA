#include<iostream>
#include<climits>

using namespace std;

int binarySearchRecursive(int arr[] , int size, int s, int e, int target)
{
    //base case
    if(s > e)
    {
        return -1;
    }

    int mid = (s+e)/2;

    // 1 case mai solve krunga
    if(arr[mid] == target)
    {
        return mid;
    }

    // baki recursion handle kr lega
    // agar target mid ke equal nhi h to
    // ya to target mid se bada hai
    if(target > arr[mid])
    {
        //right mee jana h -> means right ki recursice call lagani h
        return binarySearchRecursive(arr,size,mid+1,e,target);

    }
    else
    {
        // left me jana h
        return binarySearchRecursive(arr,size,s,mid-1,target);
    }
    // ya target se chhota hai

}



int main()
{
 
    int arr[] = {5, 10, 18, 29, 37, 46, 60, 74, 83, 92};
    int size = sizeof(arr)/sizeof(arr[0]);

    int s =0;
    int e = size-1;
    int target = 46;
    int ans = binarySearchRecursive(arr,size,s,e,target);
    cout<<"Target found-> "<<ans;

  
    





    return 0;
}