#include<iostream>

using namespace std;

// M1 : visited method
// void missingElementsM1(int *arr, int n)
// {
//     for(int i =0; i<n; i++)
//     {
//         int index = abs(arr[i]);

//         if(arr[index-1] > 0)
//             arr[index-1] *= -1;
//     }

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i] > 0) cout<<i+1<<" ";
//     }
// }

// M2 : Sorting ans swaping method
void missingElementsM2(int *arr, int n)
{
    int i =0;
    while(i<n)
    {
        int index = arr[i] -1;
        if(arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] !=i+1) cout<<i+1<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,3,5,3,3};
    int n = sizeof(arr)/sizeof(int);

    // missingElementsM1(arr,n);
    missingElementsM2(arr,n);




    return 0;
}