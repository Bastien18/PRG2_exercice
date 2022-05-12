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


void c(double n, double* carre, double* cube){
   *carre = n*n;
   *cube = n*n*n;
}

int main(void) {
   double n = 5.,
            carre,
            cube;

   c(n, &carre, &cube);

   printf("%g %g %g\n",n, carre, cube);

   return 0;
}

