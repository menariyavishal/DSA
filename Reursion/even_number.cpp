#include<iostream>
#include<vector>


using namespace std;

void printEven(int arr[],int size,int index, vector<int> &ans)
{
    //base case
    if(index == size)
    {
        return;
    }


    //1 case mera
    // if(arr[index]%2==1)
    if(!(arr[index]&1))
    {
        ans.push_back(arr[index]);
        // cout<<arr[index]<<" ";
    }
    
    // baki recursion ka
    printEven(arr,size,index+1,ans);

}




int main()
{
    int arr[] = {37, 92 ,5, 18, 74, 46, 60, 83, 29, 10};
    int arr1[] = {20,21,30,31,50,51};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int index =0;
    vector<int> ans;

    printEven(arr1,size1,index,ans);

    for(auto num: ans)
    {
        cout<<num<<" ";
    }

  
    





    return 0;
}