#include<iostream>
#include<algorithm>
 using namespace std;

 void sortZeroOne(int arr[],int n)
 {
    int Zcount = 0;
    int Ocount = 0;
    //countig zeros and ones
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0){
            Zcount++;
        }

        if(arr[i]==1){
             Ocount++;
        }
           
    }

    //Inserting zeros and ones
    int i =0;
    for(;i<Zcount;i++)
    {
        arr[i]=0;
    }
    for(;i<n;i++)
    {
        arr[i]=1;
    }

    //Printing arrays
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
 }

 void fillFunction(int arr[],int n)
 {
     int Zcount = 0;
    int Ocount = 0;
    //countig zeros and ones
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0){
            Zcount++;
        }

        if(arr[i]==1){
             Ocount++;
        }
           
    }
    fill(arr,arr+Zcount,0);
    fill(arr+Zcount,arr+n,1);

     //Printing arrays
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }

 }

 int main()
 {
    //Method 1.
    int arr[10] = {0,1,0,0,1,1,0,1,0};
    int size = 9;
    // sortZeroOne(arr,size);

    //Method 2.fill() function
    // fillFunction(arr,size);

    //Method 3. sort() functio

    sort(arr,arr+size);
     //Printing arrays
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    }
    

    


    return 0;
 }