//
// Created by pandav on 06/01/2020.
//

#ifndef UNTITLED_FILETUC_H
#define UNTITLED_FILETUC_H
#define TAILLE_MAX_FTUC 100
#include <stdbool.h>

struct fileTuc {
    int premier;//indice du premier
    int dernier;//indice du dernier+1
    int valeurs[TAILLE_MAX_FTUC];
};    //file vide : premier = dernier

struct fileTuc * ftuc_creer(void);
void ftuc_liberer(struct fileTuc *);
bool ftuc_isfull(struct fileTuc *);
bool ftuc_estVide(struct fileTuc *);
void ftuc_enfiler(struct fileTuc *, int);
int ftuc_defiler(struct fileTuc *);
int ftuc_getFirst(struct fileTuc *);
int ftuc_getLast(struct fileTuc *);



#endif //UNTITLED_FILETUC_H