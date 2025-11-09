#include<iostream>
#include<limits.h>
using namespace std;

void MinValue_in2DArray(int arr[][4],int rowSize,int colSize)
{
    int minans = INT_MAX;
    for(int i=0;i<rowSize;i++)
    {
        int sum =0;
        for(int j=0;j<colSize;++j)
        {
            minans = min(minans,arr[i][j]);
        }
        
    }
    cout<<"Minimum value in the array is : "<<minans<<endl;
}



void MaxValue_in2DArray(int arr[][4],int rowSize,int colSize)
{
    int maxans = INT_MIN;
    for(int i=0;i<rowSize;i++)
    {
        int sum =0;
        for(int j=0;j<colSize;++j)
        {
            maxans = max(maxans,arr[i][j]);
        }
        
    }
    cout<<"Maximum value in the array is : "<<maxans<<endl;
}






int main()
{
    int arr[3][4] = {
                    {16,25,30,40},
                    {50,69,21,13},
                    {79,33,56,89}
                    };

    int rowSize = 3 , colSize = 4;
    MinValue_in2DArray(arr,rowSize,colSize);
    MaxValue_in2DArray(arr,rowSize,colSize);




    return 0;
}