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

#define LIGNE 3
#define COLONNE 4

double sommeMatrice(double* debutM, size_t ligne, size_t colonne){
   double somme = 0;
   for(size_t i = 0; i < ligne*colonne; ++i){
      somme += *(debutM + i);
   }
   return somme;
}

int main(void) {

   double m[LIGNE][COLONNE] = {{1,2.5, 3, 4},
                            {5,6, 7.5, 8},
                            {9.5,10,11,12}};

   printf("%.2f", sommeMatrice((double*)m, LIGNE, COLONNE));

   return 0;
}