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

#define TAILLE 10

char* strcpy(char* to, const char* from);

int main(void) {

   const char chaine1[] = "Coucou !";
   char chaine2[TAILLE];

   char* ptr_dest = strcpy(chaine2, chaine1);

   printf("%s\n", chaine1);
   printf("%s\n", ptr_dest);

   return EXIT_SUCCESS;
}

char* strcpy(char* to, const char* from){

   if(to == NULL) return NULL;
   char* tmp = to;

   while((*to++ = *from++) != '\0');

   return tmp;
}