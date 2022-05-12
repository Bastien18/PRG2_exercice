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

#define SIZE 3

int* matriceDiag(int* debutM, size_t n){
   int* ptr = (int*) calloc(n, sizeof(int));
   for(int* i = ptr; i < ptr+n; ++i){
      *i = *(debutM + (i-ptr)*n + (i-ptr));
   }
   return ptr;
}

int main(void) {

   int matrice[SIZE][SIZE] = {{1,2,3},
                              {4,5,6},
                              {7,8,9}};

   int* ptr = matriceDiag((int*)matrice, SIZE);

   for(int* i = ptr; i != (ptr + SIZE); ++i){
      printf("%d ", *i);
   }

   free(ptr);

   return 0;
}