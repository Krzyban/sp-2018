//Starting with a frequency of zero, 
//what is the resulting frequency after all of the changes 
//in frequency have been applied?

#include <stdio.h>
#include <stdlib.h>

int count();
void read_data();
void sum();


int main()
{
  FILE *fp = fopen("input","r");
  int a=count(fp);
  fclose(fp);
  int tab[a];
  fopen("input","r");
  read_data(tab, fp);
  fclose(fp);
  sum(tab,a);
} 

int count(FILE *fp)
{
  int a = 0;
  int x;
  while(fscanf(fp,"%d",&x) != EOF)
  {
    a++;//zlicz ilość zmiennych
  }
  return a;
}

void read_data(int *tab, FILE *fp)
{
  int a = 0;
  int x;
  while(fscanf(fp,"%d",&x) != EOF)
  {
    tab[a] = x;
    a++;
  }
}

void sum(int *tab, int a)
{
  int sum = 0;
  for (int i = 0; i < a; i++)
  {
    sum+=tab[i];// sumowanie kolejnych wartości
  }
  printf("Sum= %d\n", sum); // wypisz wynik
} 
