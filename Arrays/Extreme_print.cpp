#include<iostream>
 using namespace std;

 void extremePrint(int arr[],int size)
 {
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        if(i==j)
        {
            cout<<arr[i]<<" ";
            break;
        }
        else
        {
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;
        }
    }
 }

 int main()
 {
    int arr[7]={10,20,30,40,50,60,70};
    int size;
    cout<<"enter size"<<endl;
    cin>>size;

    extremePrint(arr,size);
    return 0;
 }