#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> findComplement(vector<int>binary)
{
    int n = binary.size();
    vector<int>twosComp(n+1,0);

    // step1 : flip the bits
    for(int i = n-1 , k = twosComp.size()-1; i>=0; i--,k--)
    {
        // twosComp[i] = binary[i]^1; // 1->0, 0->1
        // twosComp[i] = 1-binary[i]; // 1->0, 0->1
        // twosComp[i] = !binary[i]; // 1->0, 0->1
        twosComp[k] = binary[i] == 0 ? 1 : 0; // 1->0, 0->1

        // use any of the above 4 methods to flip the bits

    }

    // step2 : add 1 to the flipped bits
    int carry = 1;
    for(int i = twosComp.size() - 1; i>=0;i--)
    {
        int sum = twosComp[i]+carry;
        twosComp[i] = sum%2;
        carry = sum/2;
    }
    if(carry)
    {
        twosComp[0] = 1;
    }

    return twosComp;

}


int main()
{
    vector<int>binary = {1,0,1,1,0,1};
    vector<int>twosComp = findComplement(binary);

    for(int i = 0; i<twosComp.size(); i++)
    {
        cout<<twosComp[i]<<" ";
    }
    cout<<endl;

    return 0;
}