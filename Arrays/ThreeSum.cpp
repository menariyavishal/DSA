#include<iostream>
 using namespace std;

 //Declaring a function that print all unique triplets that is no element will occur twice
 void checkThreeSum (int arr[],int n,int target)
 {

    for(int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            for(int  k =j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                
                }
            }
        }
    }
    cout<<"There is no triplet exist equal to target!!"<<endl;
 }

 int main()
 {
    int arr[10] = {10,20,30,40};
    int size = 4;
    int target = 60;
    checkThreeSum(arr,size,target);

    return 0;
 }