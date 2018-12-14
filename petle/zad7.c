//7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, 
//a następnie wypisze liczbę liczb dodatnich w niej zawartych.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void take_input(int *input);
void print_result(int *input);

int main()
{
  int tablica[6];
  take_input(tablica);
  print_result(tablica);
}

void take_input(int *input)
{
  //int tablica[]={90.776, 92.906, 2, 3, 44, 5};
  printf("podaj 6 liczb do tablicy");
  for(int i=0; i<=5; i++)
  {
    scanf("%d",&input[i]);
  }
}

void print_result(int *input)
{
  int m =0;
  for(int i=0; i<=5; i++)
  {
    if(input[i]>=0)
      m=m+1;
  }
  printf("tablica zawiera %d liczb dodatnich",m);
}
