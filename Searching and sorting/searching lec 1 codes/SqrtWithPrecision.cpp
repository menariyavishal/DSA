#include<iostream>
using namespace std;

int mySqrt(int n)
{
    // Aplying search space from 0 to n
    int s = 0 , e = n;
    int ans = 0;

    while(s<=e)
    {
    
        int mid = s + (e-s)/2;
        if(mid*mid <= n)
        {
            ans  = mid;
            // right me jao
            s = mid +1;

        }
        else
        {
            e = mid -1;
        }
        mid = s + (e-s) >> 1;


    }
    return ans;
}

double sqrtWithPrecision(int n)
{
    double sprt = mySqrt(n);
    int precision = 6;
    double inc = 0.1;

    while(precision--)
    {
        double j = sprt;  // j -> 7.0
        while(j*j <= n)
        {
            sprt = j; // sprt -> 7.0
            j += inc; // j -> 7.1
            
        }
        inc = inc/10; // inc -> 0.01
    }
    return sprt; 

}

double BSWithPrecision(int n)
{
    double s = 0 , e = n;
    double ans = 0;
    while((e-s) >= 0.000001)
    {
        double mid = s + (e-s)/2;
        if(mid*mid <= n)
        {
            ans = mid;
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    return ans;
}

int main()
{
    int n = 63;
    // cin>>n;
    cout<<"M1 : sqaure roote with precision : "<<endl;
    double ans = sqrtWithPrecision(n);
    printf("%.6f\n",ans);
    cout<<"M2 : sqaure roote with precision : "<<endl;
     ans = BSWithPrecision(n);
    printf("%.6f\n",ans);




    return 0;
}