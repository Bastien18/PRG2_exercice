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

unsigned short getBit(unsigned short pos, int n);

int main() {

   printf("%d", getBit(0,5));

 return 0;
}

unsigned short getBit(unsigned short pos, int n){
   int mask = 1 << pos;
   n &= mask;
   return n >>= pos;
}