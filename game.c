#include <stdio.h>

int main()
{
    int inizio;
    
    printf("Vuoi giocare?");
    scanf("");

    printf("Come ti chiami? \n");
    char nomeutente[50];
    scanf("%[^\n]s", nomeutente);
    printf("Ti chiami %s", nomeutente);
}