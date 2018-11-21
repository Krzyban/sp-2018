//FIZZBUZZ

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;

int main()
{
  for(i=1; i<21; i++ ) 
  {
    if( (i%3)==0 && (i%5)==0 ) {
        printf("FizzBuzz");
    }
    else if((i%3)==0) 
    {
        printf("Fizz");
    }
    else if((i%5)==0) 
    {
        printf("Buzz");
    }
    else{
        printf("%d",i);
    }
  }
}