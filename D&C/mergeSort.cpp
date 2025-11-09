#include<iostream>

using namespace std;

void merge(int arr[], int s, int e, int mid)
{
    //left and right length nikal leta hu
    int leftLen = mid-s+1;
    int rightLen = e-mid;

    // left or right array create karo
    int *leftArr = new int[leftLen];
    int *rightArr = new int[rightLen];

    // main array ki staring index position
    int index = s;

    // leftArr me vlaues copy kro main array se
    for(int i =0;i<leftLen; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }

    index = mid+1;

    // rightArr me values copy kri main array se
    for(int i =0; i<rightLen; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    // merge 2 sorted array ka logic

    int i = 0;
    int j = 0;
    int mainIndex = s;

    while(i < leftLen && j < rightLen)
    {
        if(leftArr[i] < rightArr[j])
        {
            arr[mainIndex] = leftArr[i];
            i++;
            mainIndex++;
        }
        else
        {
            arr[mainIndex] = rightArr[j];
            j++;
            mainIndex++;
        }
    }

    // yha pr mujhe baki ke 2 cases handle karne h
    while(i < leftLen)
    {
        arr[mainIndex] = leftArr[i];
        i++;
        mainIndex++;
    }
    while(j < rightLen)
    {
        arr[mainIndex] = rightArr[j];
        j++;
        mainIndex++;
    }

    // delete heap memory
    delete[] leftArr;
    delete[] rightArr;
    
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if(s >= e)
    {
        return;
    }

    int mid = (s+e)/2;

    // left part ko sort karwalo recursion se
    mergeSort(arr,s,mid);
    // right part ko sort karwalo recursion se
    mergeSort(arr,mid+1,e);
    // dono ko merge kr do
    merge(arr,s,e,mid);
}

int main()
{
    int arr[] = {10,80,100,30,90,70,60,20,110,112,50,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = size - 1;

    cout<<"Before: "<<endl;
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,s,e);

    //printing array
    cout<<"After: "<<endl;
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}