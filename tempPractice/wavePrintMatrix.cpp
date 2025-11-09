#include<iostream>
#include<vector>

using namespace std;

void colWiseWavePrint(vector<vector<int>>&v, int m, int n)
{
    int colStart = 0;

    while(colStart < n)
    {
        // even col no
        if((colStart &1) == 0 )
        {
            for(int i =0;i<m;i++)
            {
                cout<<v[i][colStart]<<" ";
            }
        }
        else
        {
            for(int i = m-1; i>=0; i--)
            {
                cout<<v[i][colStart]<<" ";
            }
        }
        colStart++;
    }
    cout<<endl;
}

void rowWiseWavePrint(vector<vector<int>>&v, int m, int n)
{
    int rowStart = 0;
    while(rowStart < m)
    {   
        // even row no : L -> R
        if((rowStart & 1) == 0)
        {
            for(int j = 0; j<n; j++)
            {
                cout<<v[rowStart][j]<<" ";
            }
        }
        else
        {
            // R -> L
            for(int j = n-1; j>=0; j--)
            {
                cout<<v[rowStart][j]<<" ";
            }
        }

        rowStart++;
    }
}

int main()
{
    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int m = v.size();
    int n = v[0].size();

    cout<<"Col-wise Wave print : \t";
    colWiseWavePrint(v,m,n);
    cout<<endl;
    cout<<"Row-wise Wave print : \t";
    rowWiseWavePrint(v,m,n);

    



    return 0;
}
