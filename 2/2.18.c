/*
  ---------------------------------------------------------------------------
  File           :
  Lab name       :
  Author(s)      : Bastien Pillonel
  Date           :
  Goal           : le but du programme et non le but du laboratoire !!

  Comment(s) : à compléter

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define TAILLE 5

void afficher(int* tab, size_t taille){
   assert(taille);
   printf("[");
   for(int* i = tab; i < tab + taille; ++i){
      if(i > tab)
         printf(",");
      printf("%d", *i);
   }
   printf("]");
}

int main(void) {

   int tab1[TAILLE] = {3,4,2,5,6};
   int tab2[TAILLE];

   memcpy((void*) tab2, (void*) tab1, TAILLE* sizeof(int));

   afficher(tab1, TAILLE);
   afficher(tab2, TAILLE);

   return 0;
}