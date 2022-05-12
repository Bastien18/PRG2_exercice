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

void initM(int* debutM, size_t ligne, size_t colonne){
   // Version pas très optimale
   /*for(size_t i = 0; i < ligne*colonne; ++i){
      *(debutM + i) = !(i/colonne) ? 1: !(i%colonne) ? 1 : (i/colonne == ligne-1)?
      1 : (i%colonne == colonne-1) ? 1: 0;
   }*/

   // Pas oublier les asserts
   assert(debutM);
   assert(ligne > 0);
   assert(colonne > 0);

   for(size_t i = 0; i < ligne; ++i){
      for(size_t j = 0; j < colonne; ++j){
         *(debutM + i*colonne +j) = (j == 0) ? 1 : (j == colonne -1) ? 1 :
                                    (i == 0) ? 1 : (i == ligne-1) ? 1 : 0;
      }
   }
}

int main(void) {

   int m[5][6];

   initM((int*)m, 4, 6);

   for(size_t i = 0; i < 24; ++i){
      if(!(i%6))
         printf("\n");
      printf("%d", *((int*)m + i));

   }

   return 0;
}