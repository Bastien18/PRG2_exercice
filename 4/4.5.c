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

char* strncat(char* to, const char* from, size_t size);

int main(void) {

   {
      const char* from = "ABC";
      char to[10] = "";
      for(size_t i = 1; i <= 4; ++i){
         strncat(to, from,i);
         printf("%s\n", to);
      }
   }

   return 0;
}

char* strncat(char* to, const char* from, size_t size){
   char* tmp = to;

   if(size) {
      while(*to) to++;
      while((*to++ = *from++) != '\0'){
         if(--size == 0){
            *to = '\0';
            break;
         }
      }
   }
   return tmp;
}