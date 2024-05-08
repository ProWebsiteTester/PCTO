#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char choice[3];

    printf("Vuoi giocare?");
    scanf("%s", choice);
    
    for (int i = 0; choice[i]; i++)
    {
            choice[i] = tolower(choice[i]);
    }
    
    if (strcmp(choice, "no") == 0)
    {
        printf("Ci dispiace");
    } 
    
    else
    {
        printf("Come ti chiami apprendista? \n");
        char nomeutente[50];
        scanf(" %[^\n]s", nomeutente);
        printf("Ok %s, ora iniziamo\n\n", nomeutente);

        printf("Tutti vanno a scuola di magia ma solo per %s sarebbe stato il primo giorno.\n\n", nomeutente);
        
        float orario;
        printf("A che ora ti svegli %s per andare a scuola?\n", nomeutente);
        scanf("%f", &orario);

        if (orario > 10)
        {
            printf("Ti svegli alle %.2f ", orario);
            printf("rendendoti conto di essere in ritardo \n(come al solito)\nMangi di corsa la prima cosa che trovi ed esci di casa.\n");
        }
        
        else if (orario < 10)
        {
            printf("Ti svegli alle %.2f ", orario);
            printf("e fai colazione. \nCosa prendi per colazione?\n");

            char colazione[50];
            scanf(" %[^\n]s", colazione);
            printf("\nFinisci di mangiare %s ed esci di casa.\n", colazione);
        }

        printf("Come vai a scuola?");
        char trasporto[50];
        scanf(" %[^\n]s", trasporto);

        char volo[15];
        printf("\nArrivi (stranamente) in tempo %s. \nDevi andare alla classe di pozioni magiche che si trova al secondo piano.", trasporto);
        printf("\nQuale delle due piattaforme volanti prendi? \n");
        scanf(" %[^\n]s", volo);


        for (int i = 0; volo[i]; i++) {
            volo[i] = tolower(volo[i]);
        }

        if (strcmp(volo, "la prima") == 0)
        {
            printf("Prendi la prima piattaforma, ti rendi conto che stai andando al corridoio sbagliato e torni indietro per prendere l'altra piattaforma\n");
        }

        printf("Prendi la seconda piattaforma e corri verso la classe di pozioni.\nTi scusi per il ritardo e vedi che gli unici posti disponibili sono accanto all'elfo, al lupo mannaro e al vampiro.\nAccanto a chi ti siedi?");
        char compagno[25];

        scanf("%s", compagno);

        for (int i = 0; compagno[i]; i++) {
            compagno[i] = tolower(compagno[i]);
        }

        if (strcmp(compagno, "al vampiro") == 0)
        {
            printf("Sei morto");
        }
        
        else
        {
            printf("Ti siedi accanto %s", compagno);
            printf(" e scopri che si chiama %s, come te\n", nomeutente);  
        }
        

    }
}