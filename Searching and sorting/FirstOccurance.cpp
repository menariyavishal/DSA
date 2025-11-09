#include<iostream>

using namespace std;

void firstOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s =0;
    int e =n-1;

    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            ansIndex = mid;

            // kyuki first occurance ha i to ans lfet me hi milega
            // left me jao

            e = mid - 1;

        }

        else if ( target > arr[mid])
         {
            // right me jao
            s = mid + 1;
         }
        //  if(target < arr[mid])
        else
         {
            // left me jao
            e = mid - 1;
         }
        // ye wali baat hamesha nhul jata hu 
        mid = s + (e-s)/2;
    }
}



int main()
{

    int arr[] = {10,20,20,20,30,40,50,60,60,60,70,80,80};
    int n = sizeof(arr);
    int target = 60;
    int ansIndex = -1;

    firstOccurance(arr, n, target, ansIndex);
    cout<< "First Occurance : "<<ansIndex<<endl;



    return 0;
}