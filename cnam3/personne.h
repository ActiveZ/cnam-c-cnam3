/*
 * Personne.h
 *
 *  Created on: 12 févr. 2021
 *      Author: joel
 */

#ifndef PERSONNE_H_
#define PERSONNE_H_


typedef struct {
	char nom[20]; 	//p->nom
	char prenom[20];
	int age; 		//p->age
	char email[50];
} PERSONNE;

// constructeur de personne ...
PERSONNE* Personne_create();
//Affichage formaté d'une personne
void Personnne_print(const PERSONNE*);

//contient le nom passé en paramètre
int Personnne_has_nom(const PERSONNE* p, const char* nom);
//contient l'email passé en paramètre
int Personnne_has_email(const PERSONNE*, const char* email);

// destructeur de personne ...
void Personne_delete(PERSONNE*);





#endif /* PERSONNE_H_ */
