//Here are other examples:
//+1, -1 first reaches 0 twice.
//+3, +3, +4, -2, -4 first reaches 10 twice.
//-6, +3, +8, +5, -6 first reaches 5 twice.
//+7, +7, -2, -7, -4 first reaches 14 twice.
//What is the first frequency your device reaches twice?

#include <stdio.h>
#include <stdlib.h>

void read_data();
int count();
void check();

int main()
{
  FILE *fp = fopen("input","r");//liczy zmienne
  int a=count(fp);
  fclose(fp);
  int tab[a];
  fopen("input","r");
  read_data(tab, fp);
  fclose(fp);
  check(tab, a);
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

void check(int *tab, int a)
{
  int go=0;
  int suma[200000];// tablica na 200tys
  suma[0]=tab[0];//pierwszy na sztywno
  int i = 1;
  int x = 1;
  while(go==0)
  {
    suma[i]=suma[i-1]+tab[x]; //dodawanie kolejnych wartosci
    for (int j = 0; j < i; j++)
    {
      if (suma[j]==suma[i])//sprawdzanie wszystkich poprzednich wartosci - szukanie odpowiedzi
      {
        printf("Liczba - %d (pozycja - %d)\n", suma[j],i);// wypisanie rozwiazania
        go=1;
      }
    }
    i++;
    x++;
    if(x>=a)//jesli przekroczy liczbe zmiennych
    x=0;
  }
}  