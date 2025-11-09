#include<iostream>

using namespace std;




int slowExpoen(int a, int b)
{
    int ans =1;
    for(int i=0;i<b;i++)
    {
        ans *=a;
    }
    return ans;
}

int fastExpoen(int a, int b)
{
    int ans =1;
    while(b>0)
    {
        if(b&1)
        {
            ans *= a;
        }
        a *= a;
        b>>=1;
    
    }
        
    return ans;
}


int main()
{

    cout<<fastExpoen(5,4)<<endl;





}