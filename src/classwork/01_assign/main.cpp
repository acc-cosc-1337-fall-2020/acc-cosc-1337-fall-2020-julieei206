//Write the include statement for types.h here
#include <iostream>
#include "types.h"

 using std::cout; using std::cin; using std::endl; 

int main() 
{
  int num;

  cout<<"Enter a number!\n";
  cin>>num;

  int result=multiply_numbers(num);
  cout<<"Result="<<result<<endl;

  int num1=4;

  result=multiply_numbers(num1);
  cout<<"Result="<<result<<endl;

	return 0;
}

