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

void inverser_1(char* s);
char* inverser_2(const char* s);

int main(void) {

   char s1[] = "ABCDEF";
   printf("Avant inv : %s\n", s1);
   inverser_1(s1);
   printf("Apres inv_1 : %s\n", s1);

   const char* s2 = "ABCDEF";
   char* s3 = inverser_2(s2);

   printf("Apres inv_2 : %s\n", s3);
   free(s3);

   return 0;
}

void inverser_1(char* s){
   if(s != NULL){
      char tmp, * fin = s + strlen((const char*)s) - 1;
      while(s < fin){
         tmp = *s;
         *s++ = *fin;
         *fin-- = tmp;
      }
   }
}

char* inverser_2(const char* s){
   if(s != NULL){
      const size_t TAILLE = strlen(s);
      char* r = (char*) calloc(TAILLE + 1, sizeof(char));
      if(r != NULL){
         char* fin = r + TAILLE - 1;
         for(; *s; s++){
            *fin-- = *s;
         }
         return r;
      }
   }

   return (char*) s;
}