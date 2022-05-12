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

//#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

//using namespace std;

int main(void) {
   int n;
   char c;
   printf("Donnez un nombre entier et un caractere : ");
   scanf("%d %c", &n, &c);
   printf("n = %d, c = %c\n", n, c);
   return EXIT_SUCCESS;
}