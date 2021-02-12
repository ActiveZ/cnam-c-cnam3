#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chaine.h"
#include "personne.h"
#include "tableau_chaine.h"

int main() {

	PERSONNE* personnes[10];
	for (int i = 0; i < 4; i++)
		personnes[i] = Personne_create();

	for (int i = 0; i < 4; i++)
		Personnne_print(personnes[i]);

	char nom[20];
	printf("Saisir le nom de la personne a rechercher : ");
	scanf("%s", nom);
	int trouve = 0;
	for (int i = 0; i < 4; i++)
		if (Personnne_has_nom(personnes[i], nom)) {
			Personnne_print(personnes[i]);
			trouve = 1;
			break;
		}
	if (!trouve)
		printf("Personne ne possede ce nom ...\n");


	trouve = 0;
	char email[20];
	printf("Saisir l'email de la personne a rechercher : ");
	scanf("%s", email);
	for (int i = 0; i < 4; i++)
		if (Personnne_has_email(personnes[i], email)) {
			Personnne_print(personnes[i]);
			trouve = 1;
			break;
		}
	if (!trouve)
		printf("Personne ne possede cet email ...\n");


	FILE* file = fopen("personne.txt", "a");
	for (int i = 0; i < 4; i++) {
		fprintf(file, "%s %s %d %s\n",
			personnes[i]->nom,
			personnes[i]->prenom,
			personnes[i]->age,
			personnes[i]->email);
	}
	fclose(file);

	for (int i = 0; i < 4; i++)
		Personne_delete(personnes[i]);
}


int main_v1() {
	char* NOM1[] = { "Marc",  "Jean-Marie",  "Paul",
					   "François-Xavier",    "Claude" };

	char NOM2[5][16] = { "Marc",  "Jean-Marie",  "Paul",
					   "François-Xavier",    "Claude" };

	printf("taille NOM1=%d taille NOM2=%d\n", sizeof(NOM1), sizeof(NOM2));

	char* s = "Marc";
	printf("%s %s %s\n", "Marc", NOM1[0], NOM2[0]);
	printf("%x %x %x %x\n", "Marc", NOM1[0], s, NOM2[0]);
	return EXIT_SUCCESS;

}

char* saisir_ligne() {
	char buf[200];
	printf("Entrez une ligne de texte ");
	fgets(buf, 200, stdin);
	char* newLigne = malloc(strlen(buf) + 1);
	strcpy(newLigne, buf);
	return newLigne;
}

int main_v2() {
	char* page[10];
	for (int i = 0; i < 4; i++) {
		page[i] = saisir_ligne();
	}

	for (int i = 3; i >= 0; i--) {
		printf("%s", page[i]);
	}

	char* s = saisir_ligne();
	int position;
	printf("Entrez une position : "); scanf("%d", &position);
	free(page[position]);
	page[position] = s;

	for (int i = 3; i >= 0; i--) {
		printf("%s", page[i]);
	}

	char mot[20];
	printf("Saisir un mot : "); scanf("%s", mot);
	printf("**** affichage des lignes contenant %s\n", mot);
	for (int i = 0; i < 4; i++) {
		if (strstr(page[i], mot))
			printf("%s", page[i]);
	}

	return EXIT_SUCCESS;
}



