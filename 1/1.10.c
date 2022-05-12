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
   int n = 255;
   double x = 12.345;

   printf("%#o\n",n);
   printf("%X\n",n);
   printf("%+07d\n",n);
   printf("%.3e\n",x);
   printf("%g\n",x);
   printf("%.4f\n",x);

   return EXIT_SUCCESS;
}