#include<iostream>

using namespace std;

int getLength(char arr[], int size)
{
    int count =0;
    int index = 0;

    while(arr[index] != '\0' && index < size)
    {
        count++;
        index++;
    }

    return count;
}

int main()
{
    char arr[100];
    cin.getline(arr, 100); // taking input from user
    cout<<getLength(arr, 100)<<endl; // calling function to get length of char array



    return 0;
}