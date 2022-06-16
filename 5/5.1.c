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

int main(void) {

   FILE* fichier1 = fopen("../5/5.1.txt","r");

   if(!fichier1){
      return EXIT_FAILURE;
   }

   char c;

   while((c = (char)fgetc(fichier1)) != EOF){
      printf("%c", c);
   }

   fclose(fichier1);


   return 0;
}