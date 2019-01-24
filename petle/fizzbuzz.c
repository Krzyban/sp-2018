//FIZZBUZZ

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void FizzBuzz();

int main()
{
  FizzBuzz();
}

void FizzBuzz()
{
  int i;
  for(i=1; i<101; i++ ) 
  {
  if( (i%3)==0 && (i%5)==0 ) 
  {
    printf("FIZZBUZZ\n");
  }
  else if((i%3)==0) 
  {
    printf("Fizz\n");
  }
  else if((i%5)==0) 
  {
    printf("Buzz\n");
  }
  else{
    printf("%d\n",i);
    }
  }
}