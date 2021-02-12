#include "personne.h"

#include <stdlib.h>
#include <stdio.h>

// constructeur de personne ...
PERSONNE* Personne_create() {
	PERSONNE* p = malloc(sizeof(PERSONNE));
	printf("Entrez un nom, un prenom, un age et un email : ");
	scanf("%s %s %d %s", p->nom, p->prenom, &p->age, p->email);
	return p;
}

//Affichage formaté d'une personne
void Personnne_print(const PERSONNE* p) {
	printf("nom=%s, prenom=%s, age=%d, email=%s\n", p->nom, p->prenom, (*p).age, p->email);
}

// destructeur de personne ...
void Personne_delete(PERSONNE* p) {
	printf("Destruction de %s %s\n", p->nom, p->prenom);
	free(p);
}

int Personnne_has_nom(const PERSONNE* p, const char* nom) {
	return strcmp(p->nom, nom) == 0;
}

//contient l'email passé en paramètre
int Personnne_has_email(const PERSONNE* p, const char* email) {
	return strcmp(p->email, email) == 0;
}


