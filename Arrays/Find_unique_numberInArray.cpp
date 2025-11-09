#include<iostream>
 using namespace std;

/*
    Given a non-empty array of intergers every element apperars twice except for one. Find that single one.

    Constraints---> Time complexcity-- Linear
               ---> Space complexicity -- O[1]
*/

int UniqueNumber(int arr[],int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        //Applying XOR on all array elemets
            ans = ans^arr[i];
    }
    return ans;
}
 int main()
 {

    int arr[10]={1,2,1,4,2,4,8};
    int size = 7;
    int ans = UniqueNumber(arr,size);
    cout<<"Unique number is:"<<ans<<endl;


    return 0;
 }