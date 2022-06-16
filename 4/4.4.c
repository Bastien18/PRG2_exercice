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

char* strcat(char* to, const char* from);

int main(void) {

   const char* from = "toi !";
   char to[10] = "Coucou ";               /// Si chaîne to pas initialisé problème
   // lors
                                        /// de la recherche de \0

   printf("%s", strcat(to, from));

   return EXIT_SUCCESS;
}

char* strcat(char* to, const char* from){
   char* tmp = to;

   while(*to++ != '\0');
   --to;
   while((*to++ = *from++) != '\0');

   return tmp;

}