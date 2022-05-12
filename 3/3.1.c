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
struct S {
   int a;
   char b[3];
};

void afficher(struct S* s);

int main(void) {
   struct S s = {.a = 1, .b = "ABC"};
   afficher(&s);
   return EXIT_SUCCESS;
}
void afficher(struct S* s) {
   printf("a = %d, b = %s\n", s->a, s->b);
}