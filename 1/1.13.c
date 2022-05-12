/*
  ---------------------------------------------------------------------------
  Fichier     :
  Nom du labo :
  Auteur(s)   : Bastien Pillonel
  Date        :
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_NOM 20

int main(void) {

   /*char nom[TAILLE_NOM + 1];

   printf("Entrez votre nom (%d caract. max) : ", TAILLE_NOM);
   scanf("%20s", nom);

   printf("Votre nom est \"%s\"\n", nom);
   system("PAUSE");
   return EXIT_SUCCESS;*/

   char nom[TAILLE_NOM + 1];

   printf("Entrez votre nom (%d caract. max) : ", TAILLE_NOM);
   scanf(" %20[^\n]", nom);         // " %20[^\n]" permet de prendre les 20
   // premiers caractères à partir du premier caractère non blanc jusqu'à un \n

   printf("Votre nom est \"%s\"\n", nom);
   system("PAUSE");
   return EXIT_SUCCESS;

   return 0;
}