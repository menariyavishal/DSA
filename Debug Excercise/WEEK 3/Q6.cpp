// Debug the code. List all triplets in array that sums to X.
#include<iostream>
using namespace std;

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			for(int k=j; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;

    cout<<tripletSumToX(arr,n,90);



    return 0;
}