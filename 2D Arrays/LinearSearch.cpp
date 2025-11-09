#include<iostream>
using namespace std;


bool linearSearch2DArray(int arr[][4],int rowSize,int colSize,int target)
{
    // LInear search logic

    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;++j)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }

    return false;
}






int main()
{

    int arr[3][4] = {
                    {10,20,30,40},
                    {11,22,33,44},
                    {31,41,51,65}
                    };
        
    int rowSize = 3 , colSize = 4;
    int target = 501;

    bool ans = linearSearch2DArray(arr,rowSize,colSize,target);

    cout<<"ans: "<<ans<<endl;






    return 0;
}