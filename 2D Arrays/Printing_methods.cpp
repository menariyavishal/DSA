#include<iostream>
using namespace std;

//Printing row-wise
void rowWisePrint(int arr[][4],int rowSize,int colSize)
{
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


//Printing col-wise
void colWisePrint(int arr[][4],int rowSize,int colSize)
{
    for(int col=0;col<colSize;col++)
    {
        for(int row = 0;row<rowSize;row++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}


//Diagonal Traversal L to R
void DiagonalTraverse_L2R(int arr[][3],int rowSize,int colSize)
{
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;++j)
        {
            if(i==j)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}


//Diagonal Traversal R to L
void DiagonalTraverse_R2L(int arr[][4],int rowSize,int colSize)
{
    for(int i =0;i<rowSize;i++)
    {
        for(int j =0;j<colSize;++j)
        {
            if(i+j==colSize-1)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }



}






int main()
{
    int arr[4][4] = {
                        {10,20,30,40},
                        {11,22,33,44},
                        {31,32,33,34},
                        {41,42,43,44}
                     };

    int rowSize = 4;
    int colSize = 4;
    

    //Calling function printing row wise
    // rowWisePrint(arr,rowSize,colSize);

    //Calling function printing col wise
    // colWisePrint(arr,rowSize,colSize);

    //Calling function diagonal traversal
    // DiagonalTraverse_L2R(arr,rowSize,colSize);

    //Calling function diagonal traversal
    DiagonalTraverse_R2L(arr,rowSize,colSize);









    return 0;
}