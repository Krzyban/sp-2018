//2. Napisz program wyświetlający poniższą szachownicę:* * * * * * * *


#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void print_chessboard();

int main()
{
  print_chessboard();
}

void print_chessboard()
{
  int i, j;
  for(i=0; i<10; i++)
  {
    if(i%2==1)
      printf(" ");
    for(j=0; j<10; j++)
      printf("*");
    printf("\n");
  }
}