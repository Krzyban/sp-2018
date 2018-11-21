//7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, 
//a następnie wypisze liczbę liczb dodatnich w niej zawartych.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i,m=0;

int main()
{
  //int tablica[]={90.776, 92.906, 2, 3, 44, 5};
  int tablica[6];
  printf("podaj 6 liczb do tablicy");
  for(i=0; i<=5; i++)
  {
    scanf("%d",&tablica[i]);
  }
  for(i=0; i<=5; i++)
  {
    if(tablica[i]>=0)
      m=m+1;
  }
  printf("tablica zawiera %d liczb dodatnich",m);
}
