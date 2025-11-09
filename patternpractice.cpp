#include<iostream>

using namespace std;

void fullFancy12(int n)
{
    // upper part
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0 ; j<2*i+1; j++)
        {
            if(j%2==0)
            {
                cout<<i+1<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    //lower part

    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<2*(n-i-1)-1; j++)
        {
            if(j%2==0)
            {
                cout<<n-i-1<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}

void invertedNumeric(int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(i==0 || i==n-1 || i==n-2 || j==0 || j==n-1 || i+j==n-1)
            {
                cout<<i+j+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void solidHalfDiamod(int n)
{
    for(int i =0; i<2*n-1; i++)
    {
        for(int j =0; j<i+1; j++)
        {
            cout<<"* ";
        }

        for(int j =0; j<2*(n-i-1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

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


void fancyPattern3(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<2*i+1; j++)
        {
            if(j==2*i)
            {
                cout<<"* ";
            }
            else
            {
                int k =1;
                int cr = i;
                if(cr>0)
                {
                    cout<<k<<" ";
                    k++;
                    cr--;
                }
            }
        }
        cout<<endl;
    }

    int ls = n-1;
    for(int i =0; i<ls; i++)
    {
        for(int j =0; j<2*(ls-i); j++)
        {
            if(j==0 || j == ls-i)
            {
                cout<<"* ";
            }
            else
            {
                int k = 1;
                int cr = ls-i-1;
                if(cr>0)
                {
                    cout<<k<<" ";
                    k++;
                    cr--;
                }
            }
        }
        cout<<endl;

    }
}

int main()
{
    // int n;
    // cout<<"Enter value of n: ";
    // cin>>n;

    // for(int i =0; i<n; i++)
    // {
    //     for(int j =0; j<n; j++)
    //     {
    //         if(j==0 || i == n-1 || i == j)
    //         {
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // fullFancy12(n);
    // invertedNumeric(n);
    // solidHalfDiamod(n);
    // fancyPattern2(n);
    // fancyPattern3(n);



    bool bit = 5 & (1<<2);


    // cout<< (-2^3)<<endl;
    // cout<< (1^4)<<endl;
    // cout<< bit<<endl;
    // cout<< (3|(1<<3)) <<endl;
    cout<< (-5>>1)<<endl;

    // if(~0==1)
    // {
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"no";
    // }




    return 0;
}