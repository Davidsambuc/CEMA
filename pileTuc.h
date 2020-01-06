//
// Created by pandav on 06/01/2020.
//

#ifndef PILETUC_H
#define PILETUC_H
#define TAILLE_MAX_PTUC 100

#include <stdbool.h>
struct pileTuc {
    int s; //indice du sommet + 1
    unsigned char valeurs[TAILLE_MAX_PTUC];
};    //pile vide s=0

struct pileTuc * ptuc_creer(void);
void putc_liberer(struct pileTuc *);
void ptuc_empiler(struct pileTuc *, unsigned char);
char ptuc_depiler(struct pileTuc *);
bool putc_estVide(struct pileTuc *);
unsigned char ptuc_sommet(struct pileTuc *);

#endif //PILETUC_H