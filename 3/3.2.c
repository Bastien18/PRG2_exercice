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

typedef struct personne personne;
typedef enum couleurYeux couleurYeux;

enum couleurYeux {BLEU = 0, VERT, GRIS, MARRON, NOIR};
const char* COULEUR_YEUX_STR[5] = {"bleu", "vert", "gris", "marron", "noir"};

struct personne{
   const char* nom[20];
   uint8_t taille;
   couleurYeux couleur;
};

void afficher1(personne p){
   printf("Nom: %s\n", *p.nom);
   printf("Taille: %" PRIu8 " cm\n", p.taille);
   printf("Couleur yeux: %s\n", COULEUR_YEUX_STR[p.couleur]);
}

void afficher2(personne* p){
   printf("Nom: %s\n", *p->nom);
   printf("Taille: %" PRIu8 " cm\n", p->taille);
   printf("Couleur yeux: %s\n", COULEUR_YEUX_STR[p->couleur]);
}

int main(void) {

   personne toto = {.nom = "Toto", .taille = 180, .couleur = BLEU};

   afficher1(toto);
   afficher2(&toto);

   return 0;
}