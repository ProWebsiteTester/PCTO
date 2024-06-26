#include <stdio.h> //solita libreria
#include <string.h> //libreria per le stringhe negli if facilitati
#include <ctype.h> //per poter semplificare gli if mettendo tutto in minuscole
#include <stdlib.h> //per parrot e rick

int main()
{
    char choice[3]; //variabile per scelta si/no iniziale

    printf("Vuoi giocare?");
    scanf("%s", choice);
    
    for (int i = 0; choice[i]; i++)
    {
            choice[i] = tolower(choice[i]);
    }
    
    if (strcmp(choice, "no") == 0)
    {
        printf("Ci dispiace\n");
    } 
    
    else
    {
        printf("Come ti chiami apprendista? \n");
        char nomeutente[50]; //variabile per username
        scanf(" %[^\n]s", nomeutente);

        if (strcmp(nomeutente, "PARROT") == 0)
        {
            const char *url = "parrot.live";

            char command[1000];
            sprintf(command, "curl %s", url);

            system(command);

            return 0;
        }
        
        else if (strcmp(nomeutente, "RICK") == 0)
        {
            const char *url = "ascii.live/rick";

            char command[1000];
            sprintf(command, "curl %s", url);

            system(command);

            return 0;
        }

        printf("Ok %s, ora iniziamo\n\n", nomeutente);

        printf("Tutti vanno a scuola di magia ma solo per %s sarebbe stato il primo giorno.\n\n", nomeutente);
        
        float orario; //variabile per orario sveglia
        printf("A che ora ti svegli %s per andare a scuola?\n\n", nomeutente);
        scanf("%f", &orario);
        
        char colazione[50]; //variabile per colazione
        
        if (orario > 10)
        {
            printf("Ti svegli alle %.2f \n\n", orario);
            printf("rendendoti conto di essere in ritardo \n(come al solito)\nMangi di corsa la prima cosa che trovi ed esci di casa.\n\n");
        }
        


        else if (orario <= 10)
        {
            printf("Ti svegli alle %.2f ", orario);
            printf("e fai colazione. \nCosa prendi per colazione?\n");

            
            scanf(" %[^\n]s", colazione);
            printf("\nFinisci di mangiare %s ed esci di casa.\n\n", colazione);
        }

        printf("Come vai a scuola?");
        char trasporto[50]; //variabile per mezzo di trasporto
        scanf(" %[^\n]s", trasporto);

        char volo[15]; //variabile per piattaforma volante
        printf("\nArrivi (stranamente) in tempo %s. \nDevi andare alla classe di pozioni magiche che si trova al secondo piano.", trasporto);
        printf("\nQuale delle due piattaforme volanti prendi? La prima o la seconda?\n\n");
        scanf(" %[^\n]s", volo);


        for (int i = 0; volo[i]; i++)
        {
            volo[i] = tolower(volo[i]);
        }

        if (strcmp(volo, "la prima") == 0)
        {
            printf("Prendi la prima piattaforma, ti rendi conto che stai andando al corridoio sbagliato e torni indietro per prendere l'altra piattaforma\n\n");
        }

        printf("Prendi la seconda piattaforma e corri verso la classe di pozioni.\nTi scusi per il ritardo e vedi che gli unici posti disponibili sono accanto all'elfo, al lupo mannaro e al vampiro.\nAccanto a chi ti siedi?\n\n");
        char compagno[25]; //variabile per compagno di banco

        scanf(" %[^\n]s", compagno);

        for (int i = 0; compagno[i]; i++)
        {
            compagno[i] = tolower(compagno[i]);
        }

        if (strcmp(compagno, "al vampiro") == 0) //se si sceglie il vampiro si muore
        {
            printf("\nSei morto perch'e il vampiro aveva sete.\n");
        }
        
        else
        {
            printf("Ti siedi accanto %s", compagno);
            printf(" e scopri che si chiama %s, come te\n", nomeutente);  
            printf("Il professore vi dice di creare delle pozioni a scelta.\nChe pozione proponi di creare?\n");

            char pozione[25];
            scanf(" %[^\n]s", pozione);

            printf("\nProponi %s di fare una ", compagno);
            printf("%s ma decide di farne una mischiando tutti i materiali a disposizione.\n\n", pozione);
            printf("Succede una cosa che nessuno mai si sarebbe aspettato (esplode la scuola).\nSecoli di tradizioni e mistiche creazioni buttati per colpa di %s che non ha voluto seguire quello che avevi detto.\n\n", nomeutente);

            if (orario <= 10) //stessa variabile orario iniziale per poter ricoleggare la scelta della colazione
            {
                int a;
                while (a<=7)
                {
                    printf("\nCrolli \nEsplosioni \nMorti");
                    a++;
                }
                printf("\n\nTi riesci a salvare solo grazie alle energie prese poco prima con %s", colazione);
                printf("\nNon facilmente esci dalle macerie dell'istituto.");
                printf("\n\nTorni a casa passando per un campo di unicorni. Ti avvicini?\n");
                char unicorno[3]; //variabile scelta per unicorno
                scanf(" %[^\n]s", unicorno);

                for (int i = 0; unicorno[i]; i++)
                {
                    unicorno[i] = tolower(unicorno[i]);
                }
                if(strcmp(unicorno, "si") == 0)
                {
                    printf("\nNon sono pacifici quanto sembravano essere, %s sei morto\n", nomeutente);
                }
                else
                {   
                    printf("\nDecidi di continuare verso casa, dopo una giornata cosi\nstancante non puoi perdere altre energie.\nSul tragitto incontri un clan di goblin che vuole rapinarti\n");
                    printf("Cosa fai %s? Gli dai tutto ciò che hai o combatti?", nomeutente);
                    char goblin[40];
                    scanf(" %[^\n]s", goblin);

                    for (int i = 0; goblin[i]; i++)
                    {
                    goblin[i] = tolower(goblin[i]);
                    }

                    if (strcmp(goblin, "combatti") == 0 || strcmp(goblin, "combatto") == 0)
                    {
                        printf("\nCombatti con tutte le energie che ti rimangono.\nMa quando meno te lo aspetti arriva il tuo compagno di banco %s", nomeutente);
                        printf("\nDopo ciò che era successo, avresti voluto vendicarti \nma lo risparmi dopo l'aiuto che ti da con i goblin.");
                    }

                    printf("\n\nRealizzi che forse non 'e stata la migliore delle giornate \ne che svegliarti pochi minuti piu tardi avrebbe potuto farti morire.\nInizi a ripensare a come una semplice colazione ti abbia salvato.\nChi sa quanti universi alternativi si celano dietro le decisioni di ogni giorno.\n\n");
                    
                }
            }
            else
            {
                printf("\n\nPurtroppo qui finisce la vita di %s,\nun povero studente apprendista che proprio durante il suo primo giorno di scuola \n si 'e ritrovato accanto un essere inutile che ha portato la fine del vecchio istituto.", nomeutente);
                printf("\nDisse il professore alla fine della sua lezione di storia magica e \nl'omonimo %s decise di tornare a casa fiero di non aver fatto esplodere \nla nuova scuola durante il suo primo giorno.\n", nomeutente);
            }
            printf("\n\nIdeato e creato da\nPrisca Saverese Benni\ne Filippo Labate. \nPossibile solo grazie a %s\n", nomeutente);
        }
    }
}