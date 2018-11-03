#include <stdio.h>



int main(void){
  double a;

  printf(stdout,"Podaj liczbe rzeczywistą nieujemną ");
  scanf("%d",&a);
  // printf("\n");

  if(a < 0){
    printf(stderr,"Błąd. Liczba %d jest ujemna\n",a);
    exit(1);
  }
  else{
    printf("Kwadrat liczby %dlf wynosi %.d\n",a,a*a);
  }
    

  return 0;
}