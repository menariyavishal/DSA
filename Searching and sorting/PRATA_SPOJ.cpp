#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int>&cooksRank, int prata, int mid)
{
    int Pcount = 0;

    for(int i = 0; i<cooksRank.size(); i++)
    {
        int currCooksRank = cooksRank[i];
        int timeTaken = 0;
        int R = 1;
        while(timeTaken + R*currCooksRank <= mid)
        {
            Pcount++;
            timeTaken += R*currCooksRank;
            R++;
        }
        if(Pcount >= prata)
        {
            return true;
        }

    }

    return false;
}

int minTimeToMakePrata(vector<int>&cooksRank, int prata)
{
    int start =0;
    int maxRank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = maxRank *(prata*(prata+1)/2);
    int ans = -1;
    while(start <= end)
    {
        int mid = (start + end) >> 1;
        if(isPossible(cooksRank,prata,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int T; 
    cin>>T;

    while(T--)
    {
        int prata, cooks;
        cin>>prata>>cooks;
        vector<int>cooksRank;
        while(cooks--)
        {
            int rank;
            cin>>rank;
            cooksRank.push_back(rank);
        }

        cout<<minTimeToMakePrata(cooksRank,prata)<<endl;
    }

    return 0;
}