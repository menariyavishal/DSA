#include<iostream>

using namespace std;

int getQuotient(int dividend , int divisor)
{
    int s = 0 ;
     int e = dividend;
     int mid = s + ((e-s)>>1);
     int ans = -1;

     while(s<=e)
     {
        if(divisor * mid == dividend)
            return mid;

        if(divisor * mid < dividend)
        {
            // store and compute ,move to right
            ans = mid;
            s = mid + 1;
        }
        else 
        {
            // move to left
            e = mid - 1;
        }
        mid = s + ((e-s)>>1);
     }
        return ans;
}

int main()
{

    int dividend , divisor;
    cout << "Enter the dividend and divisor: ";
    cin >> dividend >> divisor;

    int ans = getQuotient(abs(dividend), abs(divisor));

    // handling the positive and negative cases
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = -ans;
    }
    cout << "Quotient is: " << ans << endl;
    





    return 0;
}