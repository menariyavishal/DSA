#include<iostream>

using namespace std;


int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

    for(int i =0 ; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
        cout<<endl;
    }




    return 0;
}