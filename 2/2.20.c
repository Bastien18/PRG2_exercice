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
#include <string.h>

int main(void) {

   // Affiche memmove est tres tres utile.

   char str[] = "memmove est tres utile......";
   memmove(str + 17, str + 12, 10);
   printf("%s\n", str);

   return 0;
}