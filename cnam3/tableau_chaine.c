#include "tableau_chaine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void saisir_tab_chaine(char(*tab)[100], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = ", i);
		scanf("%s", tab[i]);

	}
}

void afficher_tab_chaine(const char tab[][100], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = %s\n", i, *(tab + i));

	}
}

void trier_tab_chaine(char tab[][100], int taille) {
	char temp[100];
	for (int i = 0; i < taille; i++)
		for (int j = 0; j < taille - 1; j++)
			if (strcmp(tab[j], tab[j + 1]) > 0) {
				strcpy(temp, tab[j]);
				strcpy(tab[j], tab[j + 1]);
				strcpy(tab[j + 1], temp);
			}
}

void saisir_tab_chaine_v2(char* tab[], int taille) {

	char buf[1000];
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = ", i);
		scanf("%s", buf);
		tab[i] = malloc(strlen(buf) + 1);
		strcpy(tab[i], buf);

	}
}

void afficher_tab_chaine_v2(char* tab[], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = %s\n", i, tab[i]);

	}
}

void trier_tab_chaine_v2(char* tab[], int taille) {
	char* temp;
	for (int i = 0; i < taille; i++)
		for (int j = 0; j < taille - 1; j++)
			if (strcmp(tab[j], tab[j + 1]) > 0) {
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
}

void saisir_tab_chaine_v3(char** tab, int taille) {

	char buf[1000];
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = ", i);
		scanf("%s", buf);
		*(tab + i) = malloc(strlen(buf) + 1);
		strcpy(*(tab + i), buf);

	}
}

void afficher_tab_chaine_v3(char** tab, int taille) {
	for (int i = 0; i < taille; i++) {
		printf("tab[%d] = %s\n", i, tab[i]);

	}
}

void trier_tab_chaine_v3(char** tab, int taille) {
	char* temp;
	for (int i = 0; i < taille; i++)
		for (int j = 0; j < taille - 1; j++)
			if (strcmp(tab[j], tab[j + 1]) > 0) {
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
}
