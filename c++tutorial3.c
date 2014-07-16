#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int z;
double x,y;
  cout<<("Enter 1 for MPH to KPH or 2 for KPH to MPH"<<endl;
  cin>>z;
 
switch (z) /* the variable z will be checked for each case*/
{
  case 1: /* case 1 replaced the if statement that checked to see if z was equal to 1*/
  
  cout<<"Please enter a speed in miles per hour"<<endl;
  cin>>x;
  y=1.609344 * x;
  cout<<"The equivalent speed in kilometers per hour is "<<y<<endl;
  break;
  

  case 2: /*case 2 replaced the if statement that check to see if z was to 2*/
  
   cout<<"Please enter a speed in kilometers per hour"<<endl;
   cin>>x;
   y = x/1.609344;
   cout<<"The equivalent speed in miles per hour is "<<y<<end;
  break;
  
  
 default: //default replaced the else statement
      
         cout<<"Invalid input"<<endl;
         break;
      }
system ("pause");
return 0;
}