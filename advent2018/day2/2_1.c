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
  char word[MDN];// wczytanie wyrazów z pliku
  int i=0;
  for (i=0;i<ilosc; i++)
  {
    fscanf(fp,"%s",word);
    A[i] = (char*) malloc(sizeof(char)*MDN);
    strcpy(A[i],word);//przeniesienie do tablicy A z słowo
  }
}

void count_letters(char **A, int a)
{
  int x;
  int counter[26]={0};//26x0w tablicy poczatkowych wartości
  int result1=0, result2=0;
  for(int i=0; i<a; i++)
  {
    int two=0, three=0, j=0;//liczniki 2 i 3
    while(*(A[i]+j) != '\0')
    {
      if (*(A[i]+j) >= 'a' && *(A[i]+j) <= 'z')//sprawdza czy jest litera
      {
        x = *(A[i]+j) - 'a';//kod asci -a=liczba od 0 do 26 która bedzie miejscem w tablicy
        counter[x]++;//dane miejsce zmieni sie z 0 na 1
      }
      j++;
    }
    for(int c=0; c<26; c++)// kontrola wartosci na pozycjach c w wyrazie
    {
      if(counter[c]==2)
        two=1;
      if(counter[c]==3)
        three=1;
      counter[c]=0;//zerowanie by nie mieszało sie przy kolejnych wyrazach
    }
    if(two>0)//nie ma zliczac podwojnie
      result1++;
    if(three>0)
      result2++;
  }
  int result = result1 * result2;	
  printf("result %d\n", result);	
}