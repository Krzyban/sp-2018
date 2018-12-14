//5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, 
//a następnie wypisze zawartość tej tablicy od początku i od końca.

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
  printf("podaj 6 liczb oddzielonych spacjami");
  for(int i=0;i<6;i++)
    scanf("%d",&input[i]);
}
void print_result(int *input)
{
  printf("od poczatku");
  for(int i=0; i<=5; i++)
    printf("%d ",input[i]);

  printf("od  konca");
  for (int i=5; i>=0; i--)
    printf("%d ",input[i]);
  
}