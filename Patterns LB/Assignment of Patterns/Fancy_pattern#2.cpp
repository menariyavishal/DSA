#include<iostream>
using namespace std;

// Another method
void fancyPattern2(int n)
{
    int num = 1;

    // Growing phase
    for(int i=0; i<n; i++)
    {
        //inner loop
        for(int j =0; j<2*i+1; j++)
        {
            if(j%2==0)
            {
                cout<<num<<" ";
                num++;
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    // Shrinking phase
    int start = num - n;
    for(int i =0; i<n; i++)
    {
        int k = start;
        // inner loop
        for(int j=0; j<2*(n-i)-1; j++)
        {
            if(j%2==0)
            {
                cout<<k<<" ";
                k++;
            }
            else
            {
                cout<<"* ";
            }
        }
        start = start-(n-i-1);
        cout<<endl;
        
    }
}



int main()
{
    int n;
    cout<<"Enter yhe value of n"<<endl;
    cin>>n;

    // Growing Phase
    int c=1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<c;
            c++;
            if(j<i)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // SHrinking Phase

    int start = c - n;

    for(int i=0;i<n;i++)
    {
        int k = start;
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<k;
            k++;
            if(j<n-i-1)
            {
                cout<<"*";
            }

        }
        start = start - (n-i-1);
        cout<<endl;
    }

    return 0;
}