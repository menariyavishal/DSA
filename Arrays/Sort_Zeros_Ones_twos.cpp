#include<iostream>
 using namespace std;

 void Sort_ZeroOneTwos(int arr[],int n)
 {
    //counting zero one and twos
    int Zcount =0 ,Ocount =0, Tcount =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            Zcount++;
        }
        if(arr[i]==1)
        {
            Ocount++;
        }
        if(arr[i]==2)
        {
            Tcount++;
        }
    }
    // cout<<Tcount;

    //Inserting zero one and twos
    
    for(int i =0;i<Zcount;i++)
    {
        arr[i]=0;
    }

    for(int i=Zcount;i<(Zcount+Ocount);i++)
    {
        arr[i]=1;
    }

    for(int i =Ocount;i<n;i++)
    {
        arr[i]=2;
    }

    // Printing Array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
 }

 int main()
 {
    int arr[20] = {2,0,1,1,2,1,0,1,2};
    int size =9;

    Sort_ZeroOneTwos(arr,size);
    return 0;
 }