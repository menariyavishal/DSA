#include<iostream>
#include<cmath>
using namespace std;

//Function of an SIP calculator
double sipCalculator(double p,double r,int n)
{
   
    double FutureValue = p*(pow(1+r,n)-1)/r*(1+r);
    return FutureValue;
}

int main()
{
    //Calling a SIP calculator function
        //Input values
        double monthlyInvestment;
        cout<<"Enter the monthly Investment amount"<<endl;
        cin>>monthlyInvestment;
        double annualInteresrRate;
        cout<<"Enter the annual Interest rate in (in percentage)"<<endl;
        cin>>annualInteresrRate;
      
        int years;
        cout<<"For how many years are you planning of investment?"<<endl;
        cin>>years;
        
        // convert annual rate into monthly
        double monthlycInterestRate = annualInteresrRate/12/100;
        //Total months 
        int totalMonths = years*12;
        
        //Calculate SIP
        double returnAmount = sipCalculator(monthlyInvestment,monthlycInterestRate,totalMonths);
        cout<<"Return of investment is : Rs "<<returnAmount<<endl;

    return 0;
}
