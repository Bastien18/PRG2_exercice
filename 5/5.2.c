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

#define NOM_MAX 20
#define PRENOM_MAX 15

void saisieString(char* saisie);
void saisieAge(unsigned short saisie);

typedef struct {
   char nom[NOM_MAX], prenom[PRENOM_MAX];
   unsigned short age;
} Personne;

int main(void) {

   FILE* fichier = fopen("../5/5.2.dat", "wb");
   Personne personne;

   while(1){
      printf("Entrez un nom:\n");
      saisieString(personne.nom);
      if(!*personne.nom)
         break;

      printf("Entrez un prenom:\n");
      saisieString(personne.prenom);

      printf("Entrez un age:\n");
      saisieAge(personne.age);

      //printf("%s\n%s\n%hu", personne.nom, personne.prenom, personne.age);
   }

   fclose(fichier);
   return 0;
}

void saisieString(char* saisie) {
   scanf("%[^\n]", saisie);
   int c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

void saisieAge(unsigned short saisie){
   scanf("%3[0123456789]", saisie);
   int c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}