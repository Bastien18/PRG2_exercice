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

int* setBit(unsigned short pos, unsigned short bitValue, int* n);

int main() {

   int a = 5;
   int* ptrA = &a;

   printf("%d", *setBit(1, 1, ptrA));

 return 0;
}

int* setBit(unsigned short pos, unsigned short bitValue, int* n){
   *n = (*n & ~(1 << pos)) | (bitValue << pos); // Efface et set le bit en pos à
   // bitValue

   return n;
}