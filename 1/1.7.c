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

short lowestOrderSetBit(int n);

int main() {

   printf("%d", lowestOrderSetBit(0));

 return 0;
}

short lowestOrderSetBit(int n){
   if(!n)
      return -1;
   short compteur = 0;

   while((n & 1) == 0){
      n >>= 1;
      ++compteur;
   }

   return compteur;
}