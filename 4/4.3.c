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

char* strncpy(char* to, const char* from, size_t size);

int main(void) {

   {
      const char* from = "AB";
      char to[] = "XXXXXXXX";
      for(size_t i = 0; i <= 3; ++i){
         strncpy(to, from,i);
         printf("%s\n", to);
      }
   }

   return EXIT_SUCCESS;
}

char* strncpy(char* to, const char* from, size_t size){

   if(to == NULL) return NULL;

   size_t i = 0;

   for(; i < size && from[i] != '\0'; ++i){
      to[i] = from[i];
   }
   for(; i < size; ++i){
      to[i] = '\0';
   }

   return to;
}