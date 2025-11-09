#include<iostream>

using namespace std;


int main()
{


    char *ptr = "hello world";
    cout<<ptr<<endl; // prints hello world
    ptr[0] = 'H'; // this will give error as string literals are immutable in C++

    // int arr[] = {1, 2, 3, 4, 5};
    // arr = arr +1;
    // cout<<arr<<endl; // prints address of first element of array
    // cout<<arr+1<<endl; // prints address of second element of array




    // int a = 5;
    // char ch = 'a';
    // long l = 1133241244;

    // int *ptr;
    // cout<<ptr;

    // int *ptr = &a;
    // char *cptr = &ch;
    // long * lptr = &l;

    // cout<<sizeof(ch)<<endl;
    // cout<<sizeof(cptr)<<endl;
    // cout<<sizeof(lptr)<<endl;

    // cout<< a<<" prints value of a"<<endl;
    // cout<< &a<<" prints address of a"<<endl;
    // cout<< ptr<<" prints address of a"<<endl;
    // cout<< &ptr<<" prints address of ptr"<<endl;
    // cout<< *ptr<<" prints vlaue of ptr which is = a"<<endl;



    return 0;
}