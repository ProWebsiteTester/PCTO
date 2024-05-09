#include <stdio.h> //solita libreria
#include <string.h> //libreria per le stringhe negli if facilitati
#include <ctype.h> //per poter semplificare gli if mettendo tutto in minuscole
#include <unistd.h>

int main()
{
    char inizio[25];
    float prezzo;
    char add[200];
    char nome[50];
    char indirizzo[500];
    int si = 0;
    char risposta;

    while (si == 0)
    {
        printf("vuoi ordinare altro?\n");
        scaf(" %[^\n]s", risposta);

    

    }
    
}