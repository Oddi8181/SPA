#include "poligon.h"
Poligon* novi_poligon(float *niz_x, float *niz_y, int n){
    
    //provjera ima li poligon 3 vrha
    if (n < 3) {
           printf("Poligon mora imati 3 vrha minimalno.\n");
           return NULL;
       }
    
    
    //alokacija
    Poligon* p = (Poligon*) malloc(sizeof(Poligon));
     p->n = n; //postavljam duljinu poligona na n
     p->vrhovi = (Tocka*) malloc(n * sizeof(Tocka));
    
    //punimo  x i y sa varijablama
    for(int i = 0; i < n; i++){
        p->vrhovi[i].x = niz_x[i];
        p->vrhovi[i].y= niz_y[i];
    }
    return p;
}

Poligon* trokut(Poligon* p){
    
    Poligon* trokut = (Poligon*) malloc ( sizeof(Poligon));
    trokut->n = p->n-1;
    trokut->vrhovi = (Tocka*) malloc(trokut->n * sizeof(Tocka));
    for(int i = 0; i < trokut->n; i++){
        trokut->vrhovi[i].x = p->vrhovi[i].x;
        trokut->vrhovi[i].y = p->vrhovi[i].y;
    }
    return trokut;
}

Poligon* kopija(Poligon* p){
    Poligon* copy = (Poligon*) malloc(sizeof(Poligon));
    copy->n = p->n;
    copy->vrhovi = (Tocka*)malloc(copy->n * sizeof(Tocka));
    for (int i = 0; i < copy->n; i++) {
        copy->vrhovi[i].x = p->vrhovi[i].x;
        copy->vrhovi[i].y = p->vrhovi[i].y;
    }
    
    return copy;
}
void printanje(Poligon* p){
    if (p == NULL) return;
        printf("Poligon ima %d vrhova:\n", p->n);  // ako je broj vrhova nedovoljan
        for (int i = 0; i < p->n; i++) {
            printf("Vrh %d: (%.2f, %.2f)\n", i + 1, p->vrhovi[i].x, p->vrhovi[i].y);
    }

}


//oslobađanje memorije
void oslobodi_poligon(Poligon* p) {
    if (p != NULL) {
        free(p->vrhovi);
        free(p);
    }
}

int main(){
    float niz_x[] = {0.0, 1.0, 1.0, 0.0};
    float niz_y[] = {0.0, 0.0, 1.0, 1.0};
    int n = sizeof(niz_x) / sizeof(niz_x[0]);
    
    Poligon* p = novi_poligon(niz_x, niz_y, n);
    printanje(p);

    
    Poligon* tri = trokut(p);
    printanje(tri);
    
    Poligon* cpy = kopija(p);
    printanje(cpy);
    
    
    oslobodi_poligon(tri);
    oslobodi_poligon(p);
    oslobodi_poligon(cpy);
    
    return 0;
}
