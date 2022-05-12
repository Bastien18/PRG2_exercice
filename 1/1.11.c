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
#include <inttypes.h>

int main(void) {
   size_t i = 1;
   uint32_t j = UINT32_MAX;

   printf("%zd\n", i);
   printf("%" PRIu32, j);

   return EXIT_SUCCESS;
}