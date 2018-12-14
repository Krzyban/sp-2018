//6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy,
// a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void take_input(int *input);
void print_results(int *input);

int main()
{
  int tablica[6];
  take_input(tablica);
  print_results(tablica);
}

void take_input(int *input)
{
  printf("podaj 6 liczb do tablicy");
  for(int i=0; i<=5; i++)
  {
    scanf("%d",&input[i]);
  }
}

void print_results(int *input)
{
  int max = 0;
  for (int i = 0; i < 6; ++i)
  {
  if (input[i] > max)
    max = input[i];
  }
  int min = input[1];
  for (int i = 0; i < 6; ++i)
  {
    if (input[i] < min)
    min= input[i];
  }
  printf("min=%d",min);
  printf("max=%d",max);
}

