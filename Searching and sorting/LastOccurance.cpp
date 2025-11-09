#include<iostream>
using namespace std;


void lastOccurance(int arr[],int n, int target , int &ansIndex)
{
    int s = 0;
    int e = n-1;

    int mid = s +(e-s)/2;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            // ans mil gya
            ansIndex = mid;

            // Store and compute strategy lagyi h
            // right me jao
            s = mid + 1;

        }
        else if(target > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        
        // if(target < arr[mid])
        else
        {
            // left me jao
            e = mid - 1;

        }

        // ye wali baat me hamesha bhul jata hu
        mid = s + (e-s)/2;
    }

}


int main()
{
    int arr[] = {10,20,20,20,30,40,50,60,60,60,70,80,80};
    int n = sizeof(arr);
    int target = 60;
    int ansIndex = -1;

    lastOccurance(arr, n, target, ansIndex);
    cout<< "Last Occurance : "<<ansIndex<<endl;

    return 0;
}