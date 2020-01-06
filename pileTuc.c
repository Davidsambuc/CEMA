//
// Created by pandav on 06/01/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "pileTuc.h"

struct pileTuc * ptuc_creer(){
    struct pileTuc * pile = (struct pileTuc *)malloc(sizeof(*pile));
    pile->s = 0;
    return pile;
}

void putc_liberer(struct pileTuc * p) {
    free(p);
}

void ptuc_empiler(struct pileTuc * p, unsigned char val){
    p->valeurs[p->s++] = val;
}
char ptuc_depiler(struct pileTuc * p){
    return p->valeurs[--p->s];
}
bool putc_estVide(struct pileTuc * p){
    return p->s == 0;
}
unsigned char ptuc_sommet(struct pileTuc *p) {
    return p->valeurs[p->s-1];
}
