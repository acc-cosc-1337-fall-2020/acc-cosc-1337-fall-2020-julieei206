#include "loops.h"
using namespace std;

int factorial(int num){

  int fact=1;

  for(int i=1; i<=num; i++){

    fact*=i;
  }
  return fact;
}