//To make sure you didn't miss any, you scan the likely candidate boxes again,
//counting the number that have an ID containing exactly two of any letter 
//and then separately counting those with exactly three of any letter. 
//You can multiply those two counts together to get a rudimentary checksum 
//and compare it to what your device predicts.
//Of these box IDs, four of them contain a letter which appears exactly twice,
// and three of them contain a letter which appears exactly three times. 
//Multiplying these together produces a checksum of 4 * 3 = 12.
//What is the checksum for your list of box IDs?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MDN 254
#define MN 10

void read_data();
void count_letters();

int main()
{
  int a=250;
  FILE *fp = fopen("slowa","r");
  char **A = (char**) malloc(a*sizeof(char*));//tablica wyrazów
  read_data(A,a,fp);
  fclose(fp);
  count_letters(A,a);
}

void read_data(char **A, int ilosc, FILE *fp)
{
  char slowo[MDN];// wczytanie wyrazów z pliku
  int i=0;
  for (i=0;i<ilosc; i++)
  {
    fscanf(fp,"%s",slowo);
    A[i] = (char*) malloc(sizeof(char)*MDN);
    strcpy(A[i],slowo);//przeniesienie do tablicy A z słowo
  }
}

void count_letters(char **A, int a)
{
  int x;
  int licznik[26]={0};//26x0w tablicy poczatkowych wartości
  int wynik1=0, wynik2=0;
  for(int i=0; i<a; i++)
  {
    int dwa=0, trzy=0, j=0;//liczniki 2 i 3
    while(*(A[i]+j) != '\0')
    {
      if (*(A[i]+j) >= 'a' && *(A[i]+j) <= 'z')//sprawdza czy jest litera
      {
        x = *(A[i]+j) - 'a';//kod asci -a=liczba od 0 do 26 która bedzie miejscem w tablicy
        licznik[x]++;//dane miejsce zmieni sie z 0 na 1
      }
      j++;
    }
    for(int c=0; c<26; c++)// kontrola wartosci na pozycjach c w wyrazie
    {
      if(licznik[c]==2)
        dwa=1;
      if(licznik[c]==3)
        trzy=1;
      licznik[c]=0;//zerowanie by nie mieszało sie przy kolejnych wyrazach
    }
    if(dwa>0)//nie ma zliczac podwojnie
      wynik1++;
    if(trzy>0)
      wynik2++;
  }
  int wynik = wynik1 * wynik2;	
  printf("Wynik - %d\n", wynik);	
}