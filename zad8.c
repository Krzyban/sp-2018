//program wczyta 3 liczby rzeczywiste porowna je znajdzie najwieksza najmniejsza poda ich sume oraz iloczyn//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  float liczba1,liczba2,liczba3;
  printf("wprowadz 3 liczby calkowite:");
  scanf("%f %f %f",&liczba1, &liczba2, &liczba3);
  printf("Suma wynosi: =%f\n",(liczba1+liczba2+liczba3));
  printf("Iloczyn wynosi =%f\n",(liczba1*liczba2*liczba3));
  if(liczba1>liczba2)
  {
    if (liczba1>liczba3)
    printf("Największa liczba to: =%f\n",(liczba1));
    else printf("Największa liczba to: =%f\n",(liczba3));
  }
  else
  {
    if (liczba2>liczba3)
    printf("Największa liczba to: =%f\n",(liczba2));
    else printf("Największa liczba to: =%f\n",(liczba3));
  }
}