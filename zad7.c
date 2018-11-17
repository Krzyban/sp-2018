//program wczyta liczbe rzeczywista i wpisze jej pierwiastek oraz odwrotnosc//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  float liczba;
  printf("prosze podac liczbe rzeczywista");
  scanf("%f",&liczba);
  if(liczba==0)
  {
    printf("podana liczba to 0 pierwiastek wynosi 0");
    exit(1);
}
  if(liczba<0)
  {
    printf("podana liczba jest mniejsza od 0");
    exit(1);
  }
printf("pierwiastek =%f\n",sqrt(liczba));
printf("odwrotnosc =%f",powf(liczba,-1));

}

