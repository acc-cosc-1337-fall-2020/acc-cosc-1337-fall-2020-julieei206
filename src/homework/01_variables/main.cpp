//write include statements
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
using namespace std;


int main()
{

double meal_amount,tip_rate,total=0;

cout<<"Enter Meal Amount :$";
cin>>meal_amount;
  
cout<<"Enter Tiprate :%";
cin>>tip_rate;

double tax_amount=get_sales_tax_amount(meal_amount);

double tip_amount=get_tip_amount(meal_amount,tip_rate);
  
total=meal_amount+tax_amount+tip_amount;
  
cout<<"Meal Amount: $"<<meal_amount<<endl;
cout<<"Sales tax: $"<<tax_amount<<endl;
cout<<"Tip Amount: $"<<tip_amount<<endl;
cout<<"Total: $"<<total<<endl;
	

	return 0;
}
