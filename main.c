#include <stdio.h>

void wczytaj_dane(int*a, int*b) {
    printf("podaj a, b: ");
    scanf("%d %d", a, b);
}

void wypisz_wyniki(int k, int m){
    printf("wyniki czterech dzialan na x = %d, y = %d\n", k, m);
    printf("x + y =%d\n", k + m);

}

int main()
{
    int x, y;

    wczytaj_dane(&x,&y);
    wypisz_wyniki(x, y);

   
}
