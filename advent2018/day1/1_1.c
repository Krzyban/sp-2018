//Starting with a frequency of zero, 
//what is the resulting frequency after all of the changes 
//in frequency have been applied?



#include <stdio.h>
#include <stdlib.h>

void read_data();
int count();
void sum();


int main()
{
  FILE *fp = fopen("input","r");//liczy zmienne
  int a=count(fp);
  fclose(fp);
  int tab[a];
  fopen("input","r");
  read_data(tab, fp);
  fclose(fp);
  sum(tab,a);
  return 1;
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

int count(FILE *fp)
{
  int a = 0;
  int x;
  while(fscanf(fp,"%d",&x) != EOF)
  {
    a++;
  }
  return a;
}

void sum(int *tab, int a)
{
  int suma = 0;
  for (int i = 0; i < a; i++)
  {
    suma+=tab[i];//suma=suma+tab[1] - sumowanie kolejnych wartosci
  }
  printf("Suma  %d\n", suma); // wypisz wynik
} 
 
