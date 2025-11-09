#include<iostream>

using namespace std;

bool searchArray(int arr[],int size,int index,int target){
    //base case
    if(index == size)
    {
        return false;
    }

     //recursive call

    if(arr[index] == target)
    {
        return true;
    }
    else{
        searchArray(arr,size,index+1,target);
    }

   

    //processing
}



int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    int index =0;
    int target;
    cout<<"Enter a target value: ";
    cin>>target;

    bool ans = searchArray(arr,size,index,target);
    if(ans)
    {
        cout<<"Targer found"<<endl;
    }
    else{
        cout<<"Target nahi mila"<<endl;
    }





    return 0;
}