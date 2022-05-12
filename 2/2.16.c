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

int* inverser(const int* debut, const int* fin){
   // Rajouter assert
   assert(debut != NULL);
   assert(fin != NULL);
   assert(fin == debut - 1 || debut <= fin); // 1ere condition cas ou on passe
   // pour paramètre un ptr fin = 0 pas possible de demander une taille 0 en C
   // cas qui pourrait survenir si fonction inverser imbriquer dans une fonction
   // de test par exemple

   size_t taille = fin - debut + 1;

   int* ptr = (int*) calloc(taille , sizeof(int));

   if(ptr){
      for(int* i = ptr; i != ptr + taille; ++i){   // Possibilité de faire sans
                                                   // ptr intermédiaire
         *i = fin[-(i-ptr)];
      }
   }

   return ptr;
}

int main(void) {

   int tab[10] = {1,2,3,4,5,6,7,8,9, 10};

   int* ptr = inverser((tab),(tab+5));
   for(int* i = ptr; i != ptr + 6; ++i){
      printf("%d ", *i);
   }

   free(ptr);

   return 0;
}