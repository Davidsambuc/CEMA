#include <stdio.h>
#include "pileTuc.h"
int main(int argc, const char* argv[]) {
    struct pileTuc * p = ptuc_creer();
    printf(putc_estVide(p) ? "PILE VIDE" : "PILE NON VIDE");
    printf("\n");
    ptuc_empiler(p, 'P');
    printf("TEST 2\n");
    printf(putc_estVide(p) ? "PILE VIDE" : "PILE NON VIDE");
    printf("\n");

    printf("TEST 3\n");
    printf("%c", ptuc_sommet(p));
    printf("\n");

    ptuc_empiler(p,'I');
    printf("TEST 4\n");
    while(!putc_estVide(p)){
        printf("%c", ptuc_depiler(p));
    }
    printf("\n");
    return 0;
}