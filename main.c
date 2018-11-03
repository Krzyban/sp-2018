#include <stdio.h>

// wypisz przywitanie w kilku jezykach
void hej(char* who);

int main()
{
    hej("krzysztof");
}

// moje funkcje

void hej(char* who) 
{
    printf("hello %s\n", who);
    printf("witaj %s\n", who);
}
