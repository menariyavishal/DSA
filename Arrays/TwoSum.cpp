#include<iostream>
 using namespace std;


// Checking that the pair exist oe not 
 bool checkTwoSum(int arr[],int n,int target)
 {
    //Finding all pairs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    // pair nahi mila
    return false;
 }


// Printing the pair using Pair [in built method]
 pair<int ,int > checkTwoSumPair(int arr[],int n,int target)
 {
    pair<int ,int > ans = make_pair(-1,-1);
    //Finding all pairs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    
    return ans;
 }


//Printing the pair using array
 void checkTwoSumArray(int arr[],int n,int target,int ans[2])
 {
    
    //Finding all pairs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans[0] =arr[i];
                ans[1] =arr[j];
                return ;
            }
        }
    }
    // pair nahi mila
    return;
 }


 //Printig all pairs equals to target
 void checkTwoSumPrintAllPair(int arr[],int n,int target)
 {
    
    //Finding all pairs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    // pair nahi mila
    return;
 }

 int main()
 {
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int target = 70;
    checkTwoSumPrintAllPair(arr,size,target);







    // int ans[2] = {-1,-1}; 
    // checkTwoSumArray(arr,size,target,ans);
    // cout<<ans[0]<<" "<<ans[1]<<endl;





    // Using pair
    // pair<int ,int> ans = checkTwoSumPair(arr,size,target);
    // if(ans.first ==-1 && ans.second==-1)
    // {
    //     cout<<"pair not found"<<endl;
    // }
    // else{
    //     cout<<"pair found"<<endl<<ans.first<<", "<<ans.second<<endl;
    // }





    
    // bool ans = checkTwoSum(arr,size,target);
    // // cout<<ans<<endl;
    // if(ans == true)
    // {
    //     cout<<"Pair Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Pair not Found"<<endl;
    // }
    
    return 0;
 }