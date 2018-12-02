//5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, 
//a następnie wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i;


int main()
{
  printf("podaj 6 liczb oddzielonych spacjami");
  int tablica[6];
  for(int i=0;i<6;i++)
    scanf("%d",&tablica[i]);
  printf("od poczatku");
  for(i=0; i<=5; i++)
    printf("%d ",tablica[i]);

  printf("od  konca");
  for (i=5; i>=0; i--)
    printf("%d ",tablica[i]);
  
}