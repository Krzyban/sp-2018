#include <stdio.h>



int main(void){
  double a;

  printf("Podaj liczbe rzeczywistą nieujemną ");
  scanf("%d",&a);
}
  // printf("\n");

  if(a < 0){
    printf("Błąd. Liczba %d jest ujemna",a);
    exit(1);
  }
  else{
    printf("Kwadrat liczby %d wynosi",sqrt(a));
  }
  


