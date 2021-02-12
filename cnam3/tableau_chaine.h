#ifndef TAB_CHAINE_H_
#define TAB_CHAINE_H_

void saisir_tab_chaine(char tab[][100], int taille);
void afficher_tab_chaine(const char tab[][100], int taille);
void trier_tab_chaine(char tab[][100], int taille);

void saisir_tab_chaine_v2(char* tab[], int taille);
void afficher_tab_chaine_v2(char* tab[], int taille);
void trier_tab_chaine_v2(char* tab[], int taille);

void saisir_tab_chaine_v3(char** tab, int taille);
void afficher_tab_chaine_v3(char** tab, int taille);
void trier_tab_chaine_v3(char** tab, int taille);

#endif // TAB_CHAINE_H_
