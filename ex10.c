#include <stdio.h>

int main()
{
    int nascita;
    printf("Qual è il tuo anno di nascita?");
    scanf(" %d", &nascita);
    
    if ( nascita == 1969)
    {
        printf("\n Sei nato lo stesso anno in cui l'uomo è andato sulla luna!");
    }
    
    else if (nascita < 1969)
    {
        printf("\n Sei nato %d anni prima dell'arrivo dell'uomo sulla luna", 1969 - nascita);
    }
    
    else
    {
        printf("\n Sei nato %d anni dopo l'arrivo dell'uomo sulla luna", nascita - 1969);
    }
    
}