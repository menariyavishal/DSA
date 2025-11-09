#include<iostream>
using namespace std;


// Diagonal wise sum from L to R
void diagonal_wiseSumL2R(int arr[][3],int rowSize,int colSize)
{
    int sum =0;
    
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;++j)
        {
            if(i==j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    
     cout<<"Diagonal wise sum from left to right is : "<<sum<<endl;

}


void diagonal_wiseSumR2L(int arr[][3],int rowSize,int colSize)
{
    int sum =0;

  for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;++j)
        {
            if(i+j==colSize-1)
            {
                sum = sum + arr[i][j];
            }
        }
    }

     cout<<"Diagonal wise sum from right to left is : "<<sum<<endl;
    
}



int main()
{

    int arr[3][3] = {
                    {10,20,30},
                    {50,60,70},
                    {40,30,20}
                    };

    int rowSize = 3 , colSize = 3;

    // calling function row wise sum
    diagonal_wiseSumL2R(arr,rowSize,colSize);

    //calling function col wise sum
    diagonal_wiseSumR2L(arr,rowSize,colSize);
        

    return 0;
}