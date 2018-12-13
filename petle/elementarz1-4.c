// napisac program obliczajace silnie z pewnej niewielkiej liczby naturalnej

#include <stdio.h>

void calculate();

int main()
{
  calculate();
}
void calculate()
{
  int i,n,res;
  printf("podaj liczbe z ktorej ma byc obliczana silnia");
  scanf("%d",&n);
  res=1;
  for(i=n;i>=1;i--)
  {
    res=res*i;
  }
  printf("silnia wynosi%d",res);
}