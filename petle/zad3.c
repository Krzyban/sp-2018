//3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) 
//a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a, b, i;
int main()
{
  printf("podaj a ,oraz b");
  scanf("%d %d", &a, &b);
  if(a<b)
  {
    for(i=a+1; i<=b-1; i++)
    printf("%d\n", i );
  }
  if(a>b)
  {
  exit(1);
  }
}