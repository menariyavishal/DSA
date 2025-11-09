#include<iostream>
using namespace std;

void upperToLower(char arr[], int size)
{
    int index = 0;
    while(arr[index] != '\0' && index < size)
    {
        if(arr[index] >= 'A' && arr[index] <= 'Z')
        {
            char ch = arr[index];
            ch = ch - 'A' + 'a';
            arr[index] = ch;
        }
        index++;
    }
}


int main()
{

    char arr[100];
    int size = sizeof(arr)/sizeof(char);
    cin.getline(arr,100);
    cout<<endl<<arr<<endl;
    upperToLower(arr,size);

    cout<<arr<<endl;




    return 0;
}