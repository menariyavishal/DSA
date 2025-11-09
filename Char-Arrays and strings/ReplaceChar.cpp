#include<iostream>

using namespace std;

void replaceChar(char arr[] , char original, char newChar , int size)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==original)
        {
            arr[i]= newChar ; // replace key with space
        }
        else
        {
            
        }

    }


}

int main()
{
    char arr[100];
    cin.getline(arr, 100); // taking input from user
    char original, newChar;
    cout<<"Enter the character to be replaced: ";
    cin>>original; // taking input from user
    cout<<"Enter the new character: ";
    cin>>newChar; // taking input from user
    replaceChar(arr, original, newChar , 100); // calling function to replace character
    cout<<arr<<endl; // printing the char array after replacing character
    return 0;
}