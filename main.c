#include <stdio.h>
#include <stdlib.h>
#include "pileTuc.c"
#include "fileTuc.c"

struct fileTuc * translate(char * expression) {
    struct fileTuc * f = ftuc_creer();
    struct pileTuc * p = ptuc_creer();
    int i = 0;
    while(expression[i] != '\0') {
        //if(expression[i] )
        i++;
    }
}


int evaluate(struct fileTuc * f){
    struct pileTuc * p = ptuc_creer();
    while (!ftuc_estVide(f)) {
        int first = ftuc_defiler(f);
        if(first < 0) {
            int first_operand = ptuc_depiler(p);
            int second_operand = ptuc_depiler(p);
            int res = 0;
            if(first == -1) {
                res = first_operand + second_operand;
            } else if (first == -2){
                res = first_operand * second_operand;
            }
            ptuc_empiler(p,res);
        } else {
            ptuc_empiler(p, first);
        }
    }
    int res = ptuc_depiler(p);
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
    ftuc_enfiler(f,1);
    ftuc_enfiler(f,2);
    ftuc_enfiler(f,3);
    ftuc_enfiler(f,4);
    ftuc_enfiler(f,5);
    ftuc_enfiler(f,-2);
    ftuc_enfiler(f,-2);
    ftuc_enfiler(f,6);
    ftuc_enfiler(f,7);
    ftuc_enfiler(f,-2);
    ftuc_enfiler(f,-1);
    ftuc_enfiler(f,-2);
    /*while(!ftuc_estVide(f)) {
        unsigned char print = ftuc_defiler(f);
        printf("%c\n",print);
    }*/
    unsigned int res = evaluate(f);
    printf("%i\n", res);
    return 0;
}