#include<iostream>

using namespace std;

int main()
{

    // 2d array -> Stack memory

    int arr[4][3] = {{1,2,3},{4,5,6} };

    // 2d array -> Heap memory
        
        // 4 -> Row count
        // 3 -> Col count

     int** ptr = new int*[4]; //array of pointers (new int*[4]) and to hold the level 1 pointer address we need a level 2 pointer variable(int** ptr)
     
     for(int i = 0; i<4; i++)
     {
        ptr[i] = new int[3]; //2d array
     }










    // // array -> Stack memory
    // int arr[5] = {0};
    // cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    // // array -> Heap memory
    // int* brr = new int[5]; //default value 0
    // *brr= 0;
    // cout<<brr[0]<<brr[1]<<brr[2]<<endl;










    // // create interger into -> stack memory
    // int a = 10;
    // cout<<a<<endl;

    // // create integer into -> Heap memory
    // int* ptr = new int;  // new keyword returns address and to store it we need a pointer
    // *ptr = 50; // assign value to *ptr
    // cout<<*ptr<<endl;

    // // delete allocated memory in Heap use (delete) keyword
    // delete ptr;
    // *ptr = 0; //nullify the pointer
    // cout<<*ptr<<endl;




    return 0;
}