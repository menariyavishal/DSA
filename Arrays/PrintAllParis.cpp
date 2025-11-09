#include<iostream>
 using namespace std;

 int main()
 {
    int arr[10] = {10,20,30,40};
    int size = 4;

    //Array pattern 1.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =0;j<size;j++)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    //Array pattern 2.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =i;j<size;j++)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    //  //Array pattern 3.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =0;j<i;j++)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    // //  //Array pattern 4.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =0;j<=i;j++)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    // //  //Array pattern 5.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =size-1;j>=0;j--)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    // //  //Array pattern 6.
    // for(int i=0;i<size;i++)
    // {
    //     for(int j =size-1;j>i;j--)
    //     {
    //         cout<<arr[i]<<", "<<arr[j]<<endl;
    //     }
    // }


    //  //Array pattern 7.
    for(int i=0;i<size;i++)
    {
        for(int j =i+1;j<size;j++)
        {
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
    return 0;

 }