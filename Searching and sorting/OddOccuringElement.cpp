#include<iostream>

using namespace std;

int findOddOccuringElement(int arr[] , int n)
{
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        // Single element
        if(s == e)
        {
            return s;
        }

        // multiple elements
        int currentElement = arr[mid];
        int leftElement = arr[mid-1];
        int rightElement = arr[mid+1];

        if(mid -1 >=0)
        {
            leftElement = arr[mid-1];
        }
        if(mid+1 < n)
        {
            rightElement = arr[mid+1];
        }
       

        // duplicate does not exist
        if(currentElement != leftElement && currentElement != rightElement)
        {
            return mid;
        }

        // duplicate exists on left
        if(mid -1 >= 0 && currentElement == leftElement)
        {
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1)
            {
                // pair is starting at odd index
                // i am standing at right part
                // move to left
                e = mid - 1;
            }
            else
            {
                // pair is starting at even index
                // i am standing at left part
                // move to right
                s = mid + 1;
            }
        }

        // duplicate exists on right
        if(mid+1 < n && currentElement == rightElement)
        {
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1)
            {
                // pair is starting at odd index
                // i am standing at right part
                // move to left
                e = mid - 1;
            }
            else
            {
                // pair is starting at even index
                // i am standing at left part
                // move to right
                s = mid + 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 2, 3, 3,1,1 , 3 , 4 ,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = findOddOccuringElement(arr, n);
    if(ans != -1) {
        cout << "The element occurring odd number of times is at index: " << ans << endl;
        cout << "The element is: " << arr[ans] << endl;
    }
    return 0;
}