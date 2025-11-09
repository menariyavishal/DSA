#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr);
    int key = 400;

    bool ans = binary_search(arr , arr+n , key);

    cout<<ans<<endl;



    return 0;
}