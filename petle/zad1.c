// Napisz program, który wypisuje kolejne potęgi
// liczby 2 nie przekraczające 2010.

#include<stdio.h>

void two_pow();

int main()
{
  two_pow();
}

void two_pow()
{
  int res;
  res = 1;
  while(res < 2010)
  {
    printf("%d\n", res);
    res = res * 2;
  }
}