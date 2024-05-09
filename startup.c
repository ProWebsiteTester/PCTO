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

    printf("Benvenuto a SkyPlates\n\nCosa vorresti ordinare?\n");
    sleep(1);
    printf("\nPer adesso offriamo solo:\nPizza\nYogurt\nBurger\n\n");
    scanf(" %[^\n]", inizio);

    for (int i = 0; inizio[i]; i++)
    {
        inizio[i] = tolower(inizio[i]);
    }


    if (strcmp(inizio, "pizza") == 0 || strcmp(inizio, "burger") == 0 || strcmp(inizio, "yogurt") == 0) 
    {
        if (strcmp(inizio, "pizza") == 0)
        {
            printf("\nCosa vorresti mettere sulla tua pizza?\n");
            scanf(" %[^\n]s", add);
            printf("La tua pizza con %s", add);
            prezzo = 15.50;
            printf(" costerà  €%.2f", prezzo);
        }
    
        else if (strcmp(inizio, "yogurt") == 0)
        {
            printf("\nCosa vorresti mettere sul tuo yogurt?\n");
            scanf(" %[^\n]s", add);
            printf("Il tuo yogurt con %s", add);
            prezzo = 5.50;
            printf(" costerà  €%.2f", prezzo);
        }

        else if (strcmp(inizio, "burger") == 0)
        {
            printf("\nCosa vorresti mettere nel tuo burger?\n");
            scanf(" %[^\n]s", add);
            printf("Il tuo burger con %s", add);
            prezzo = 17.50;
            printf(" costerà  €%.2f", prezzo);
        }
        
        printf("\n\nA quale indirizzo dobbiamo consegnare %s", inizio);
        printf(" con %s?\n", add);
        scanf(" %[^\n]s", indirizzo);
        printf("Come ti chiami?\n");
        scanf(" %[^\n]s", nome);

        if (strcmp(inizio, "pizza") == 0)
        {
            printf("\nLa tua pizza arriverà al volo a %s \n\n", indirizzo);
            printf("La preghiamo di assicurarsi che %s sia presente per la consegna\n", nome);
        }

        if (strcmp(inizio, "burger") == 0 || strcmp(inizio, "yogurt") == 0)
        {
            printf("\nIl tuo %s arriverà al volo ", inizio);
            printf("a %s\n\n", indirizzo);
            printf("La preghiamo di assicurarsi che %s sia presente per la consegna\n", nome);
        }
    }
    
    else
    {
        printf("Per adesso %s non è disponibile, seleziona un'altra opzione al riavvio del programma\n", inizio);
    }
}