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

void reverseCharArryay(char arr[] , int n)
{
    int length = getLength(arr, n); // get the length of char array
    int i =0;
    int j = length-1;
    while(i<=j)
    {
        swap(arr[i], arr[j]); // swap the characters
        i++;
        j--;
    }
}

int main()
{
    char arr[100];
    cin.getline(arr, 100); // taking input from user
    reverseCharArryay(arr, 100); // calling function to reverse the char array
    cout<<arr<<endl; // printing the char array after reversing it

    return 0;
}