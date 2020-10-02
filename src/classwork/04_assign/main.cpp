//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{

  do{

    cout<<"Enter a number: ";
    int number;
    cin>>number;

    while(!(number >=1 && number <=20)){

      cout<<"Invalid number"<<endl;

      cout<<"Enter a number between 1 and 20:";
      cin>>number;
    }

    cout<<"Factorial of "<<number<<" is "<<factorial(number)<<endl;

    cout<<"Continue? (y/n)";
    char opt;
    cin>>opt;
    if(opt=='n'||opt=='N')
    break;
    cout<<endl;
  }
  while(true);

	return 0;
}