#include <stdio.h> //solita libreria
#include <string.h> //libreria per le stringhe negli if facilitati
#include <ctype.h> //per poter semplificare gli if mettendo tutto in minuscole
#include <unistd.h> //per comando sleep

int main()
{
    char inizio[25];
    float prezzo;
    char add[200];
    char nome[50];
    char indirizzo[500];
    int si = 0;
    char risposta[2];

    printf("Benvenuto a SkyPlates\n\n");
    sleep(1);

    while (si == 0)
    {
        printf("Cosa vorresti ordinare?\n");
        printf("\nPer adesso offriamo solo:\nPizza\nYogurt\nBurger\n\n");

        printf("vuoi ordinare altro?\n");
        scanf(" %[^\n]s", risposta);
        
        for (int i = 0; risposta[i]; i++)
        {
            risposta[i] = tolower(risposta[i]);
        }
        
        if (strcmp(risposta, "no") == 0)
        {
            si = 1;
            printf("Grazie per aver scelto SkyPlate\n\n");
        }
        
        else
        {
            si = 0;
            printf("Il tuo nuovo ordine verà aggiunto a quello precedente\n\n");
        }   
    }
}