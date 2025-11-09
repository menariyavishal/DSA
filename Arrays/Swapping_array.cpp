#include<iostream>
#include<algorithm>
 using namespace std;

 int main()
 {
    //Method 1. Swap inbuilt fucntion
    int a = 5,b = 7;
     cout<<"Initial values of a :"<<a<<" And b :"<<b<<endl;
    // swap(a,b); 
    // cout<<"After swap values of a :"<<a<<"And b :"<<b<<endl;

    //Method 2. By temp variable
    // int temp = a;
    // a=b;
    // b= temp;
    // cout<<"After swap values of a :"<<a<<" And b :"<<b<<endl;

    //Method 3. Arithematic method
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // cout<<"After swap values of a :"<<a<<" And b :"<<b<<endl;
    

    //Method 4. XOR method
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<"After swap values of a :"<<a<<" And b :"<<b<<endl;

    

    return 0;
 }