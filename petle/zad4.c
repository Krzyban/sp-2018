//4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. 
//Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i,w,wartosc0;

int main()
{
  printf("podaj wartosc do ktorej program ma dodawac kolejne liczby");
  scanf("%d",&w);
  if(w<1)
  {
    printf("podana liczba to 1 -error");
    exit(1);
  }
  if(w>=1)
  {
    wartosc0=0;
    for(i=0;i<=w;i++)
    {
    wartosc0=wartosc0+i;
    }
    printf("suma kolejnych liczb od 0 do n wynosi%d",wartosc0);
  }
}