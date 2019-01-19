#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  printf("podaj wartosc poczatkowa,krok dla argumentu i wartosc koncowa (po spacji)");
  float wp, kda, wk, i;
  scanf("%f %f %f", &wp, &kda, &wk);
  for(i=wp; i<wk; i=i+kda)
  {
    printf("%f %f\n", i, sqrt(i));
  }
}
