//
// Created by pandav on 06/01/2020.
//

#ifndef UNTITLED_FILETUC_H
#define UNTITLED_FILETUC_H
#define TAILLE_MAX_FTUC 100

struct fileTuc {
    int premier;//indice du premier
    int dernier;//indice du dernier+1
    unsigned char valeurs[TAILLE_MAX_FTUC];
};    //file vide : premier = dernier

void enfiler(struct fileTuc *f, unsigned char val) {
    f->valeurs[f->dernier++] = val;
    if (f->dernier == TAILLE_MAX){
        f->dernier = 0;
    }
}

char defiler(struct fileTuc *f) {
    char v = f->valeurs[f->premier++];
    if (f->premier == TAILLE_MAX) {
        f->premier = 0;
    }
    return v;
}



#endif //UNTITLED_FILETUC_H
