#include<iostream>

using namespace std;

int applyBinary(int arr[],int size , int target)
{
    int s= 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid-1] == target)
        {
            return mid -1;
        }
        else if(arr[mid + 1] == target){
            return mid + 1;
        }

        if(target > arr[mid])
        {
            // move to right
            s = mid + 2;
        }
        else
        {
            // move to left
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int main()
{

    int arr[] = {10 ,3 , 40 , 20 , 50 , 80 , 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;

    int ans = applyBinary(arr , n , target);
    cout << "Element found at index: " << ans << endl;



    return 0;
}