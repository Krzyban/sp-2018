
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int i, j;
int main()
{
  for(i=0; i<10; i++)
  {
    if(i%2==1)
      printf(" ");
    for(j=0; j<10; j++)
      printf("*");
    printf("\n");
  }
}