#include<iostream>
#include<vector>

using namespace std;

void mergeSortedArray(int arr[],int sizeArr, int brr[], int sizeBrr, vector<int>&ans)
{
    int i =0;
    int j =0;

    while(i<sizeArr && j < sizeBrr)
    {
        if(arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    // arr me kuch elements baki ho
    while (i < sizeArr)
    {
         ans.push_back(arr[i]);
        i++;
    }

    // brr me kuch elements baki ho
    while (j < sizeBrr)
    {
         ans.push_back(brr[j]);
        j++;
    }
    
}

int main()
{
    int arr[] = {10,30,50,70,101,105};
    int sizeArr = 6;

    int brr[] = {20,40,60,80,90,100};
    int sizeBrr = 6;

    vector<int> ans;
    mergeSortedArray(arr,sizeArr,brr,sizeBrr,ans);

    // print ans array
    for(int num : ans)
    {
        cout<<num<<" ";
    }




    return 0;
}