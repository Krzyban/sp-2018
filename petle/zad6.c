//6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy,
// a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i,max,min;
int main()
{
  int tablica[6];
  printf("podaj 6 liczb do tablicy");
  for(i=0; i<=5; i++)
  {
    scanf("%d",&tablica[i]);
  }
  max = 0;
  for (i = 0; i < 6; ++i)
  {
  if (tablica[i] > max)
    max = tablica[i];
  }
  min = tablica[1];
  for (i = 0; i < 6; ++i)
  {
    if (tablica[i] < min)
    min= tablica[i];
  }
  printf("min=%d",min);
  printf("max=%d",max);

}