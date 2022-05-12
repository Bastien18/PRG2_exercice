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

#define SIZE 3

void afficher(int* tab, size_t taille){
   assert(taille);
   printf("[");
   for(int* i = tab; i < tab + taille; ++i){
      if(i > tab)
         printf(",");
      printf("%d", *i);
   }
   printf("]\n");
}

int main(void) {

   int tab[SIZE] = {0};

   afficher(tab, SIZE);

   for(size_t i = 0; i < SIZE; ++i)
      tab[i]++;

   afficher(tab, SIZE);

   memset((void*) tab, 0, SIZE * sizeof(int));

   for(size_t i = 0; i < SIZE; ++i)
      tab[i] += 2;

   afficher(tab, SIZE);

   return 0;
}