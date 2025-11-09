#include<iostream>
#include<vector>

using namespace std;



vector<bool> Sieve(int n)
{
    if (n == 0) return std::vector<bool>();

    
    vector<bool>prime(n+1,true); //marked all as prime
    prime[0]=prime[1] = false; // not prime

    // int ans =0;
    for(int i =2;i*i<=n;i++)  // optimization 2
    {
        if(prime[i] == true)
        {
            // ans++;
            // int j = 2*i;
            int j = i*i;   //optimization 1 : first unmatked number will appear at i*i position
            while(j<=n)
            {
                prime[j] =false;
                j+=i;
            }
        }
    }

    return prime;
}

int main()
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    vector<bool>prime = Sieve(n);

   for(int i=0;i<=n;i++)
   {
    if(prime[i])
    {
        cout<<i<<" ";
    }
   }




    return 0;
}


// ...............................Best way to create a sieve........................ 