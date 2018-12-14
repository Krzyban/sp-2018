// etiopski sposób mnożenia dwóch liczb
// zad9 z podstrony pętle ze strony
// zadań z języków programowania

#include<stdio.h>

void take_input(int *a, int *b);
void calculate(int a, int b);

int main()
{
  int calculate_a, calculate_b;
  take_input(&calculate_a, &calculate_b);
  calculate(calculate_a, calculate_b);
}

void take_input(int *a, int *b)
{
  int i,j;
  i = j = 0;
  while(i <= 0 || j <= 0)
  {
    printf("Podaj dwie liczby naturalne dodatnie: ");
    scanf("%d %d", &i, &j);
  }
  if(i > j)
  {
    *a = j;
    *b = i;
  }
  else
  {
    *a = i;
    *b = j;
  }
}

void calculate(int a, int b)
{
  int result;
  result = 0;
  while(a > 0)
  {
    if(a % 2 == 1)
    {
      result = result + b;
    }
    a = a>>1;
    b = b<<1;
  }
  printf("\nWynik to: %d\n", result);
}
