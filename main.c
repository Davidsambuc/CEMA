#include <stdio.h>
#include "pileTuc.h"
#include "fileTuc.h"

int main(int argc, const char* argv[]) {
    /*struct pileTuc * p = ptuc_creer();
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
    printf("\n");*/

    /*struct fileTuc * f = ftuc_creer();
    printf("TEST 1\n");
    printf(ftuc_estVide(f) ? "FILE VIDE" : "FILE NON VIDE");
    printf("\n");
    ftuc_enfiler(f, 'F');
    printf("TEST 2\n");
    printf(ftuc_estVide(f) ? "FILE VIDE" : "FILE NON VIDE");
    printf("\n");
    ftuc_defiler(f);
    printf("TEST 3\n");
    printf(ftuc_estVide(f) ? "FILE VIDE" : "FILE NON VIDE");
    printf("\n");
    ftuc_enfiler(f,'F');
    for (int i = 0; i < 115; ++i) {
        ftuc_enfiler(f,'f');
    }
    unsigned char res = ftuc_defiler(f);
    printf("%c\n",res);*/

    return 0;
}