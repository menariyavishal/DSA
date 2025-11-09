// Debug the code. List all pairs in array that sums to X.
#include<iostream>
using namespace std;

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

    cout<<pairSumToX(arr,n,60);



    return 0;
}