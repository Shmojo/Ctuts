#include <iostream>
#include <stdlib.h> //this is required to use system pause
#include <math.h>  //this is required in order to perform more advanced math
using namespace std;

int main()
{

    double i,l,r,m,p,cnt=1,tot_interest=0;
	
    cout<<"Enter the principal"<<endl;
    cin>>p; //takes in the amount of the loan

    cout<<"Enter the interest rate"<<endl;
    cin>>r; //takes in the interest rate

    cout<<"Enter the length of the loan in months"<<endl;
    cin>>m; //takes in the duration of the loan in months

    r=r/100; //converts the rate into decimal form
    l=(p*(r/12.0))/(1-(pow((1+r/12.0),-m))); //equation to calculate an amount of a loan
	
    cout << "Your car payment will be "<<l<<" dollars"<<endl;

    system("pause"); //this will pause the program allowing the user to be able to see the car payment amount

    while(cnt<=m) //the loop will continue as long as cnt is less than or equal to the loan duration
    {
        i=30.4167*(p*(r/365)); //this will calculate the interest paid in a given month
        tot_interest=tot_interest+i; //total interest equals what it was plus that interest for the month
        cout<<"Interest charged in month "<<cnt<<":  "<<i<<endl;

        cout<<""<<endl;
        cnt++; //cnt is incremented by one each time the loop runs
        p=p-(l-i); //the principal equals what is was minus the loan after the loan is substracted from the interest

        cout<<"Remaining balance: "<<p<<endl;
        cout<<""<<endl;
    }
    cout<<"Total interest paid "<<tot_interest<<" dollars"<<endl;
	
	
system("pause");
return 0;
} 