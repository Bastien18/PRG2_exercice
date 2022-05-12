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

void inverser(int* debut, int* fin){
   for(size_t i = 0; i < (fin - debut + 1)/2; ++i){
      int tmp = *(debut + i);
      *(debut + i) = *(fin-i);
      *(fin-i) = tmp;
   }

}

int main(void) {

   int tab[10] = {1,2,3,4,5,6,7,8,9, 10};

   inverser((tab+1),(tab+5));
   for(size_t i = 0; i < 10;++i)
      printf("%d", *(tab+i));
   return 0;
}