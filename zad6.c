//program pierwiastek//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float pierwiastek,liczba;
int main() 
{
    
    float liczba;
    printf("program wyliczajacy pierwiastek kwadratowy podaj liczbe do pieriastkowania:\n");
    scanf("%f",&liczba);
    if(liczba<0){
        printf("podana liczba jest ujemna");
        exit(1);
    }
    printf("pierwiastek =%f",sqrt(liczba));

}
