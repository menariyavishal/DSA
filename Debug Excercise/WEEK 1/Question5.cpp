/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
    //    int p;
        for(j=i;j>=1;j--){
          cout<<j;
        //   p--;
        }
        cout<<endl;
        
    }
}