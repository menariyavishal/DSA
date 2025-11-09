#include<iostream>

using namespace std;   

void segregate0And1(int arr[], int n)
{
    int l =0 , h = n-1;

    while(l<h)
    {
        if(arr[l] == 1 && arr[h] == 0)
        {
            swap(arr[l],arr[h]);
            l++ , h--;
        }
        else
        {
            if(arr[l] == 0)
                l++;
            if(arr[h] == 1)
                h--;
        }
    }
}

int main()
{
    int arr[] = {0,1,0,1,1,0,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    segregate0And1(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}