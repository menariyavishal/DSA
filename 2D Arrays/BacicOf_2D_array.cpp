#include<iostream>
using namespace std;






int main()
{

    //Declearation of 2D array
    // int arr[4][3];          // 4-->rows and 3-->cols

    //Intialization  of 2D array
        int arr2[3][4] = {
                        {1,2,3,4},
                        {10,20,30,40},
                        {11,22,33,44}
                        };

        //Accessing of 2D array
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<arr2[i][j]<<" ";
            }cout<<endl;
        }






    return 0;
}