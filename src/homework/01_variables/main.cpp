//write include statements
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
  //Declaring variables
double meal_amount,tip_rate,total=0;
  
//Getting the input entered by the user
cout<<"Enter Meal Amount :$";
cin>>meal_amount;
  
cout<<"Enter Tiprate :%";
cin>>tip_rate;
  
//Calculating tax amount
double tax_amount=get_sales_tax_amount(meal_amount);
  
//Calculating tip amount
double tip_amount=get_tip_amount(meal_amount,tip_rate);
  
total=meal_amount+tax_amount+tip_amount;
  
// Displaying the output
cout<<"Meal Amount: $"<<meal_amount<<endl;
cout<<"Sales tax: $"<<tax_amount<<endl;
cout<<"Tip Amount: $"<<tip_amount<<endl;
cout<<"Total: $"<<total<<endl;
	

	return 0;
}
