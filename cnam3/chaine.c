#include "chaine.h"
#include <stdio.h>
#include <string.h>

//Ecrire un programme qui lit deux chaînes de caractères,
//et qui indique leur précédence lexicographique dans le code de caractères de la machine (ici: code ASCII).
//Testez votre programme à l'aide des exemples du chapitre 8.5

int compare_2_chaines() {
	char chaine1[100];
	char chaine2[100];

	printf("Entrez une 1ere chaine : ");
	scanf("%s", chaine1);
	printf("Entrez une 2eme chaine : ");
	scanf("%s", chaine2);
	return strcmp(chaine1, chaine2);
}

int compare_2_chaines_v2() {

	char chaine1[100];
	char chaine2[100];

	printf("Entrez une 1ere chaine : ");
	scanf("%s", chaine1);
	printf("Entrez une 2eme chaine : ");
	scanf("%s", chaine2);

	for (int i = 0; *(chaine1 + i) != '\0' && *(chaine2 + i) != '\0'; i++) {
		if (*(chaine1 + i) > *(chaine2 + i))
			return 1;
		if (*(chaine1 + i) < *(chaine2 + i))
			return -1;
	}
	return 0;
}

void str_convert_maj_to_min_min_to_maj(char* s) {
	while (*s != 0) {
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		else if (*s >= 'A' && *s <= 'Z')
			*s -= 'A' - 'a';
		s++;
	}
}

void str_convert_maj_to_min_min_to_maj_2(char s[]) {
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] -= 'A' - 'a';
	}
}

void afficher_tableau_chaine(char page[][100], int nb_ligne) {
	for (int i = 0; i < nb_ligne; i++) {
		printf("%s\n", page[i]);
		for (int j = 0; page[i][j] != '\0'; j++)
			printf("%c ", page[i][j]);
		putchar('\n');
	}
}

