// Debug the code. Correct the code for printing the pattern.

/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        // int k=0,gaps=n-1-i;
        int j = 0;
        while(j<n-i){
            cout<<j+1;
            j++;
        }
        int k = 0;
        while(k<2*i){
            cout<<"*";
            k++;
        }
        int m = n-i;
        while(m>0)
        {
            cout<<m;
            m--;
           
            
        }
        i++;
        cout<<"\n";
    }
}