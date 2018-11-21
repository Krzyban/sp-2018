//8. Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. 
//Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') 
//(powodującej wyświetlanie ich obok siebie).
//Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void pierwsza();
void druga();
void trzecia();
void czwarta();


int main()
{
  pierwsza();
  druga();
  trzecia();
  czwarta();
}

void pierwsza()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i;j++)
    {
      putchar('*');
    }
    putchar('\n');
  }

}

void druga()
{
  int a,b;
  for(a=1;a<=4;a++)
  {
    for(b=4;b>=a;b--)
    {
      putchar('*');
    }
    putchar('\n');
  }

}

void trzecia()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
    for(j=4;j>=1;j--)
    {
      if(j>i)
      {
      putchar(' ');
      }
      else
      {
      putchar('*'); 
      }
    }
    putchar('\n');
  }
  
}

void czwarta()
{
  int i,j;
  for(i=4; i>=1;i--)
  {
    for(j=4;j>=1;j--)
    {
      if(j>i)
      {
        putchar(' ');
      }
      else
      {
        putchar('*');
      }
    }
    putchar('\n');
  }
  
}