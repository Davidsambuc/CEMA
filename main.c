#include <stdio.h>
#include <stdlib.h>
#include "pileTuc.c"
#include "fileTuc.c"

int resolve(struct fileTuc * f){
    struct pileTuc * p = ptuc_creer();
    while (!ftuc_estVide(f)) {
        unsigned char first = ftuc_defiler(f);
        printf("%c\n", first);
        if(first == '+' || first == '*') {
            unsigned char first_operand = ptuc_depiler(p);
            unsigned char second_operand = ptuc_depiler(p);
            int firstint_operand = first_operand - '0';
            int secondint_operand = second_operand - '0';
            printf("%i%i\n", firstint_operand, secondint_operand);
            int res;
            if(first == '+') {
                res = firstint_operand + secondint_operand;
            } else {
                res = firstint_operand * secondint_operand;
            }
            printf("%i\n", res);
            unsigned char char_res = (unsigned char)res;
            ptuc_empiler(p,char_res);
        } else {
            ptuc_empiler(p, first);
        }
    }
    unsigned char res = ptuc_depiler(p);
    return res;
}

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

    struct fileTuc * f = ftuc_creer();
    ftuc_enfiler(f,'1');
    ftuc_enfiler(f,'1');
    ftuc_enfiler(f,'+');
    /*while(!ftuc_estVide(f)) {
        unsigned char print = ftuc_defiler(f);
        printf("%c\n",print);
    }*/
    unsigned char res = resolve(f);
    printf("%c\n", res);

    return 0;
}