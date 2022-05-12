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
#include <assert.h>

int* initialiser(size_t taille, int value){       // utiliser un pointeur sur int
   // en retour de fonction au lieu de void

   assert(taille);
   int* ptr = (int*) calloc(taille, sizeof(int));
   // Attention vérifier si ptr n'est pas null pour affecter la value dans for
   if(ptr){
      for(int* i = ptr; i != ptr + taille; ++i){
         *i = value;
      }
   }

   return ptr;

}

int main(void) {

   int* ptr = (int*) initialiser(4,5);

   for(int* i = ptr; i != ptr + 4; ++i){
      printf("%d", *i);
   }

   free(ptr);

   return 0;
}