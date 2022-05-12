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
   const char* nom;
   uint8_t taille;
   couleurYeux couleur;
};

void afficher2(personne* p){
   printf("Nom: %s\n", p->nom);
   printf("Taille: %" PRIu8 " cm\n", p->taille);
   printf("Couleur yeux: %s\n", COULEUR_YEUX_STR[p->couleur]);
}

void afficher_tab(personne** tabP, size_t taille){
   for(size_t i = 0; i < taille; ++i){
      afficher2(tabP[i]);
   }

}

int main(void) {

   personne paul = {.nom = "Paul", .taille = 180, .couleur = BLEU},
            pierre = {.nom = "Pierre", .taille = 175, .couleur = VERT},
            jj = {.nom = "Jean_Jaques", .taille = 182, .couleur = MARRON};

   personne* tabP[3] = {&paul, &pierre, &jj};

   afficher2(&paul);

   afficher_tab(tabP, 3);

   return 0;
}//
// Created by basti on 30.04.2022.
//
