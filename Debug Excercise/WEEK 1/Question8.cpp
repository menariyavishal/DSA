#include<iostream>
using namespace std;

/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/


void printPatt(int n){
    int i=1;
    while(i<=(n)){
        int gaps = n-2*i,k=1;
        if(i>(n)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - 1 - gaps;
        while(ch>1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

int main()
{
    printPatt(5);
    return 0;
}