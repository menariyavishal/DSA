#include<iostream>
using namespace std;

//Method 1: By creating an extra ans[][] 2D array...

void transposeMatrix_m1(int arr[][3],int rowSize,int colSize)
{
    int ans[100][100]={0};

    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            ans[i][j] = arr[j][i];
        }
    }

    //Printng of array
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Method 2: By using swap() function

void transposeMatrix_m2(int arr[][3],int rowSize,int colSize)
{
    //Tranversing entire array
    for(int i=0;i<rowSize;i++)
    {
        for(int j =i;j<colSize;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    //Printng of array
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}






int main()
{
    int arr[3][3] = {
                    {10,20,30},
                    {50,60,70},
                    {40,30,20}
                    };

    int rowSize = 3 , colSize = 3;
    
    // transposeMatrix_m1(arr,rowSize,colSize);
    transposeMatrix_m2(arr,rowSize,colSize);




    return 0;
}