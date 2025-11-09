#include<iostream>
 using namespace std;

 //Declaring a function that print all triplets
 void PrintTriplets (int arr[],int n)
 {
    int count = 0;

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            for(int  k =0;k<n;k++)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                count++;
            }
        }
    }
    cout<<"Total pairs: "<<count<<endl;
 }

 int main()
 {
    int arr[10] = {10,20,30,40};
    int size = 4;
    PrintTriplets(arr,size);


    return 0;
 }