//8. Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. 
//Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') 
//(powodującej wyświetlanie ich obok siebie).
//Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i,j,a,b;


int main()
{
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i;j++)
      printf("*");
    printf("\n");
  }
  for(a=1;a<=4;a++)
  {
    for(b=4;b>=a;b--)
      printf("*");
    printf("\n");
  }
}
