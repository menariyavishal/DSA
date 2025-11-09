#include<iostream>
using namespace std;

bool findtarget(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {44,89,36,54,20};
    int size;
    cout<<"size";
    cin>>size;
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

   cout<<findtarget(arr,size,target);
    return 0;
}