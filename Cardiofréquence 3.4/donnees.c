#include <stdio.h>
#include <stdlib.h>

int OuvertureFichier(int choix)
{


    FILE *fichier = NULL;

    fopen("Battement.csv", "r+");

     if (fichier != NULL)
    {
        // On peut lire et écrire dans le fichier
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier Battement.txt");
    }

}
