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

void c(double nombre, double* carre, double *cube){
   *carre = nombre * nombre;
   *cube = nombre * nombre * nombre;
}

int main(void) {

   double n = 3, carre, cube;

   c(n, &carre, &cube);

   printf("Nombre : %.2f \n Carre : %.2f \n Cube : %.2f", n, carre, cube);

   return 0;
}