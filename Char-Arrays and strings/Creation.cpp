#include<iostream>

using namespace std;


int main()
{
    // Creation of char name
    char name[10];
    cout << "Enter your name: ";
    //input name from user
    //cin>>name; // only work for char array

    // to take input with space use cin.getline(name, 10); // 10 is the size of char array
    cin.getline(name,100);

    cout << "Your name is: " << name << endl;

    // accesing each character of char name // ASCII value of each character
    cout<<name[0]<<"-> "<<(int)name[0]<<endl; 
    cout<<name[1]<<"-> "<<(int)name[1]<<endl; 
    cout<<name[3]<<"-> "<<(int)name[2]<<endl; 
    cout<<name[3]<<"-> "<<(int)name[3]<<endl; 
    cout<<name[4]<<"-> "<<(int)name[4]<<endl; 
    cout<<name[5]<<"-> "<<(int)name[5]<<endl; 
    



    return 0;
}