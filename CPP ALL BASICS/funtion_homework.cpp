#include<iostream>
#include<cmath>
using namespace std;

//1.Printing counting from 1 to 100
void counting1To100()
{
    for(int i =1;i<=100;i++)
    {
        cout<<i<<endl;
    }
}

//2.Finding simple interest
int simpleInteresr(int p,int t,int r)
{
    int SI = (p*t*r/100);
    return SI;
}

//3.Printing all prime numbers between 1 to 100
bool primeNumbers(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i ==0)
        {
            return false;
        }
    }
}


//Function to check eligiblitiy for voting
int eligibleForVoteOrNot(int age)
{
    if(age>=18)
    {
        cout<<"You can vote"<<endl;
    }
    else
    {
        cout<<"You can not vote"<<endl;
    }
}




int main()
{
    //Calling counting funtion
        // counting1To100();

    //Calling Simple inerest function
        // float year,rate,principleAmount;
        // cout<<"Enter the Principle amount , rate and years"<<endl;
        // cin>>principleAmount>>rate>>year;
        // cout<<simpleInteresr(principleAmount,rate,year)<<endl;

    //Calling Prime Number function
        // for(int i =1;i<=100;i++)
        // {
        //     if(primeNumbers(i))
        //     {
        //         cout<<i<<" ";
        //     }
        // }

    //Calling funtion which check eligiblity for vote
        // int age;
        // cout<<"Enter your age"<<endl;
        // cin>>age;
        // cout<<eligibleForVoteOrNot(age);
    
    





    return 0;
}