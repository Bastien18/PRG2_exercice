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

int main(void) {

   int n = 1;
   int* ptrN = &n;

   printf("Contenu de n : %d\n", *ptrN);
   printf("Addresse de n : %p\n", (void*)ptrN);
   printf("Addresse de ptrN : %p\n", (void*)&ptrN);

   return 0;
}