#include<iostream>
#include<algorithm>
// #include <numeric>

using namespace std;

void xorMethod(int *arr, int n, int &ans)
{
    // xor all elements with each other
    for(int i = 1; i<n; i++)
    {
        ans = ans^arr[i];
        // cout<<ans<<endl;

    }

    // xor the ans with indexs -> as the range of ans is from [0,n];
     for(int i = 0; i<=n; i++)
    {
        ans ^= i;
        // cout<<ans<<endl;

    }
}

void methematicalApproach(int *arr, int n)
{
    int elementSum  = 0;
    int indexSum = 0;

    for(int i = 0; i<n; i++)
    {
        elementSum += arr[i];
        indexSum += i+1;
        // cout<<"at index: "<<i<<" "<<elementSum<<" "<<indexSum<<endl;
    }

    int diff = indexSum - elementSum;
    cout<<"Missing number is: "<<diff<<endl;
}

void binarSearchMehtod(int *arr, int n)
{
    // for appyling binary sort the elements:
    sort(arr,arr+n);

    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s <= e)
    {
        if(arr[mid] == mid)
        {
            // right side me jana h
            s = mid+1;
        }
        else
        {
            // mera index or element equal nhi h
            // to index ko ans me store karo , or left side jake check karo
            ans = mid;
            e = mid-1;
        }
        mid = (s+e)/2;
    }

    if(ans == -1)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}

int main()
{
    // int arr[] = {0,1,2,4};
    // int n = sizeof(arr)/sizeof(int);
    // int ans = arr[0];
    
    // Xor method to find missing number:
    // xorMethod(arr,n,ans);
    // cout<<ans<<endl;

    // the difference of (sum of array elements) and the (sum of indexs) is the missing number:
    // cout<<"Mathemtically find missing number: ";
    // methematicalApproach(arr,n);

    int arr[] = {3,4,6,0,7,2,1,8,5};
    int n = sizeof(arr)/sizeof(int);

    // // binary search method to find missing number:
    // binarSearchMehtod(arr,n);


    return 0;
}