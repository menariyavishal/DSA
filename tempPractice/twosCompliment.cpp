#include <iostream>

using namespace std;

void normalMethod1(int arr[], int n)
{
    // perform 1's compliment
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    // add 1
    int carry = 1;

    for (int i = n-1; i>=0; i--)
    {
        int sum = arr[i] + carry;
        arr[i] = sum % 2;
        carry = sum / 2;
    }

    // print the result
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void advanceMethod(int *arr, int n)
{
    //Search for the first 1
    int i = n-1;
    while(i>=0)
    {
        if(arr[i] == 1)
        {
            i--;
            break;
        }
        else
        {
            i--;
        }
        // cout<<i<<" ";
    }
    // cout<<i<<" ";

    // Now perform 1's compliment
    while(i>=0)
    {
        if(arr[i] == 0) arr[i] = 1;
        else arr[i] = 0;

        i--;
    }

    //Printing result
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    // method 1: first do 1's compliment and then add 1.
    // normalMethod1(arr, n);

    // method 2: start searching for the first 1 from right-left , don't change anything till the first 1 including the first 1. After that perform 1 compliment.
    advanceMethod(arr,n);

    return 0;
}