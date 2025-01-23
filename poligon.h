
#ifndef poligon_h
#define poligon_h

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float x ,y;
} Tocka;

typedef struct{
    Tocka* vrhovi;
    int n;
} Poligon;

#endif /* poligon_h */
