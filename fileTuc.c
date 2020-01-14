//
// Created by pandav on 06/01/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "fileTuc.h"

struct fileTuc * ftuc_creer() {
    struct fileTuc * file = (struct fileTuc *)malloc(sizeof(*file));
    file->premier=0;
    file->dernier=0;
    return file;
}

void ftuc_liberer(struct fileTuc * f) {
    free(f);
}

bool ftuc_estVide(struct fileTuc *f){
    return f->dernier == f->premier;
}

bool ftuc_isfull(struct fileTuc *f){
    return ((f->premier - 2 == f->dernier)||(f->dernier + 1 == TAILLE_MAX_FTUC && f->premier < 2)||(f->dernier + 2 == TAILLE_MAX_FTUC && f->premier < 1 ));
}

void ftuc_enfiler(struct fileTuc *f, int val) {
    if(!ftuc_isfull(f)) {
        f->valeurs[f->dernier++] = val;
        if (f->dernier == TAILLE_MAX_FTUC){
            f->dernier = 0;
        }
    }
}

int ftuc_defiler(struct fileTuc *f){
    if(!ftuc_estVide(f)) {
        int v = f->valeurs[f->premier++];
        if (f->premier == TAILLE_MAX_FTUC) {
            f->premier = 0;
        }
        return v;
    } else {
        return -666;
    }
}

int ftuc_getFirst(struct fileTuc * f) {
    return f->valeurs[f->premier];
}

int ftuc_getLast(struct fileTuc * f) {
    return f->valeurs[f->dernier];
}