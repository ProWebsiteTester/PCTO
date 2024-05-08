#include <stdio.h>

int main()
{
    char inizio[2];
    printf("Vuoi giocare?");
    scanf("%s", inizio);

    if ("%s = no || %s = NO || %s = No", inizio)
    {
        printf("Ci dispiace");
    }
    
    else
    {
        printf("Come ti chiami? \n");
        char nomeutente[50];
        scanf("%[^\n]s", nomeutente);
        printf("Ti chiami %s", nomeutente);
    }

}