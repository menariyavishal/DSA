#include<iostream>

using namespace std;

void toLowerCase(char arr[], int n)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i] >='A' && arr[i] <='Z') // check if the character is in upper case
        {
            char ch = arr[i];
            ch = ch -'A' + 'a'; // convert to lower case
            arr[i] = ch; // replace the character in the array
        }

    }
}
void toUpperCase(char arr[], int n)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i] >='a' && arr[i] <='z') // check if the character is in lower case
        {
            char ch = arr[i];
            ch = ch -'a' + 'A'; // convert to upper case
            arr[i] = ch; // replace the character in the array
        }
        
    }
}

int main()
{
    char arr[100];
    cin.getline(arr, 100); // taking input from user
    toUpperCase(arr, 100); // calling function to convert to lower case
    cout<<arr<<endl; // printing the char array after converting to lower case

    return 0;
}