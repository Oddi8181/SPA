#include "poligon.h"

Tocka** pozitivni(Poligon *p, int *np){
    
    
    *np = 0;
    
    Tocka** pozitivni_vrhovi = (Tocka**)malloc(p->n * sizeof(Tocka*));
    
    
    for(int i = 0; i < p->n; i++){
        if(p->vrhovi[i].x > 0 && p->vrhovi[i].y > 0){
            pozitivni_vrhovi[*np] = &p->vrhovi[i];
            (*np)++;
        }
    }
    
    pozitivni_vrhovi = (Tocka**)realloc(pozitivni_vrhovi, (*np) * sizeof(Tocka*));

    return pozitivni_vrhovi;
}

Tocka** x_manji_y(Poligon* p, int *np){
    
    
    *np = 0;
    Tocka** print = (Tocka**) malloc(p->n * sizeof(Tocka*));
    for(int i = 0; i < p->n; i++){
        if(p->vrhovi[i].x < p->vrhovi[i].y){
            print[*np] = &p->vrhovi[i];
            (*np)++;
        }
    }
    print = (Tocka**)realloc(print, (*np) * sizeof(Tocka*));
    
    return print;
}


int main(){
    
    Tocka vrhovi[] = {{1, 1}, {-1, 2}, {3, 4}, {0, -2}, {5, 6}};
    Poligon p = {vrhovi, 5};
    
    int np;
    
    Tocka **pozitivni_vrhovi = pozitivni(&p, &np);
    
    Tocka **print = x_manji_y(&p, &np);
    printf("Broj pozitivnih vrhova: %d\n", np);
        for (int i = 0; i < np; i++) {
            printf("Vrh %d: (%.2f, %.2f)\n", i + 1, pozitivni_vrhovi[i]->x, pozitivni_vrhovi[i]->y);
        }
    
    printf("Broj tocaka kojima je x manji od y je: %d\n", np);
        for (int i = 0; i < np; i++) {
            printf("Vrh %d: (%.2f, %.2f)\n", i + 1, print[i]->x, print[i]->y);
        }
    
    free(pozitivni_vrhovi);
    
    return 0;
}
