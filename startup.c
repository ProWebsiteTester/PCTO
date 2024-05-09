#include <stdio.h> //solita libreria
#include <string.h> //libreria per le stringhe negli if facilitati
#include <ctype.h> //per poter semplificare gli if mettendo tutto in minuscole
#include <unistd.h> //per comando sleep


int si = 0;


int main()
{

    printf("Benvenuto a SkyPlates\n\n");
    sleep(1);

    while (si == 0)
    {
        char inizio[25];
        float prezzo = 0;
        char add[200];
        char nome[50];
        char indirizzo[500];

        char risposta[3];
        char size[2];

        printf("Cosa vorresti ordinare?\n");
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
                printf("Che quantità preferisci? \nS(€4.50), M(€5.00) o L(€6.00)?\n");
                scanf(" %[^\n]s", size);

                for (int i = 0; size[i]; i++)
                {
                    size[i] = tolower(size[i]);
                }

                if (strcmp (size, "s") == 0)
                {
                    prezzo = prezzo + 4.50;
                }

                if (strcmp (size, "m") == 0)
                {
                    prezzo = prezzo + 5.00;
                }

                if (strcmp (size, "l") == 0)
                {
                    prezzo = prezzo + 6.00;
                }
                
                printf("\nCosa vorresti mettere sul tuo yogurt?\n");
                scanf(" %[^\n]s", add);
                printf("Il tuo yogurt con %s", add);

                printf(" costerà  €%.2f", prezzo);
            }

            else if (strcmp(inizio, "burger") == 0)
            {
                printf("Che dimensione preferisci? \nS(€11.50), M(€13.00) o L(€15.00)?\n");
                scanf(" %[^\n]s", size);

                for (int i = 0; size[i]; i++)
                {
                    size[i] = tolower(size[i]);
                }

                if (strcmp (size, "s") == 0)
                {
                    prezzo = prezzo + 11.50;
                }

                if (strcmp (size, "m") == 0)
                {
                    prezzo = prezzo + 13.00;
                }

                if (strcmp (size, "l") == 0)
                {
                    prezzo = prezzo + 15.00;
                }

                printf("\nCosa vorresti mettere nel tuo burger?\n");
                scanf(" %[^\n]s", add);
                printf("Il tuo burger con %s", add);
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
                printf("\nIl tuo %s arriverà ", inizio);
                printf("a %s\n\n", indirizzo);
                printf("La preghiamo di assicurarsi che %s sia presente per la consegna\n", nome);
            }
        }
        
        else
        {
            printf("Per adesso %s non è disponibile\n", inizio);
        }
        printf("Vuoi ordinare altro? (si/no)\n");
        scanf(" %[^\n]s", risposta);
        
        for (int i = 0; risposta[i]; i++)
        {
            risposta[i] = tolower(risposta[i]);
        }
        
        if (strcmp(risposta, "si") == 0)
        {
            si = 0;
            printf("Il tuo nuovo ordine verà aggiunto a quello precedente\n\n");
        }
        
        else
        {
            si = 1;
            printf("Grazie per aver scelto Skyplates\n\n");
        }   
    }
}