#include<iostream>
using namespace std;

void Row_wiseSum(int arr[][4],int rowSize,int colSize)
{
    for(int i=0;i<rowSize;i++)
    {
        int sum =0;
        for(int j=0;j<colSize;++j)
        {
            sum = sum + arr[i][j];
        }
        cout<<"Sum is : "<<sum<<endl;
    }

}


void Col_wiseSum(int arr[][4],int rowSize,int colSize)
{

    for(int col = 0;col<colSize;col++)
    {
        int sum =0;
        for(int row=0;row<rowSize;++row)
        {
            sum = sum +arr[row][col];

        }
        cout<<"Sum is : "<<sum<<endl;
    }
}






int main()
{

    int arr[3][4] = {
                    {10,20,30,40},
                    {50,60,70,80},
                    {40,30,20,10}
                    };

    int rowSize = 3 , colSize = 4;

    // calling function row wise sum
    // Row_wiseSum(arr,rowSize,colSize);

    //calling function col wise sum
    Col_wiseSum(arr,rowSize,colSize);
        

    return 0;
}