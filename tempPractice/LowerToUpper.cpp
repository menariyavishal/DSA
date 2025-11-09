#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void upperToLower(char arr[], int size)
{
    int index = 0;
    while(arr[index] != '\0' && index < size)
    {
        // if(arr[index] >= 'a' && arr[index] <= 'z')
        // {
        //     char ch = arr[index];
        //     ch = ch - 'a' + 'A';
        //     arr[index] = ch;
        // }
        if(arr[index] >= 'a' && arr[index] <= 'z')
        {
            arr[index] = arr[index] - 'a' + 'A';
        }
        index++;
    }
}


int main()
{
    string name;
    getline(cin,name,'\n');
    cout<<name;





    // char arr[100];
    // int size = sizeof(arr)/sizeof(char);
    // cin.getline(arr,100);
    // cout<<endl<<arr<<endl;
    // upperToLower(arr,size);



    // cout<<arr<<endl;




    return 0;
}