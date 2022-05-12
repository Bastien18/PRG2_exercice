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
#include <stdint.h>
#include <inttypes.h>

typedef struct date date;

struct date{
   uint8_t jour,
            mois;
   uint16_t annee;
};

void afficherDate(date* actuel){
   printf("%" PRIu8 ".%" PRIu8 ".%" PRIu16 "\n", actuel->jour, actuel->mois,
          actuel->annee);
}

void lendemainDate(date* actuel, date* lendemain){

   *lendemain = *actuel;

   if(actuel->jour == 28){
      if(actuel->mois == 2 && actuel->annee % 4){
         lendemain->mois = actuel->mois + 1;
         lendemain->jour = 1;
      }
      else
         lendemain->jour = actuel->jour + 1;
   }
   else if(actuel->jour == 29){
      if(actuel->mois == 2 && !(actuel->annee % 4)){
         lendemain->mois = actuel->mois + 1;
         lendemain->jour = 1;
      }
      else
         lendemain->jour = actuel->jour + 1;
   }
   else if(actuel->jour == 30){
      if((actuel->mois % 7) % 2){
         lendemain->mois = actuel->mois + 1;
         lendemain->jour = 1;
      }
      else
         lendemain->jour = actuel->jour + 1;
   }
   else if(actuel-> jour == 31){
      if(actuel->mois == 12){
         lendemain->annee = actuel->annee + 1;
         lendemain->mois = 1;
         lendemain->jour = 1;
      }
      else{
         lendemain->mois = actuel->mois +1;
         lendemain->jour = 1;
      }
   }
   else
      lendemain->jour = actuel->jour + 1;
}

int main(void) {

   date aujourdhui = {.jour = 28, .mois = 2, .annee = 2016},
         lendemain;

   afficherDate(&aujourdhui);
   lendemainDate(&aujourdhui, &lendemain);
   afficherDate(&lendemain);

   return 0;
}