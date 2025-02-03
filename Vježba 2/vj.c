#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** u_oba_stringa(char** niz1, char** niz2, int n1, int n2, int* nth){

    int j = 0;
    char** novi_niz = (char**) malloc(n1 * sizeof(char*));
    for(int i = 0; i < n1; i++){
        for(int z = 0; z < n2; z++){
            if(strcmp(niz1[i], niz2[z]) == 0){
                novi_niz[j] = niz1[i];
                j++;
                break;
            }
           
        }
       
    }
    novi_niz = (char**)realloc(novi_niz, j * sizeof(char*));
    *nth = j;
    return novi_niz;
}


int* ukloni_duplikate(int* niz, int n, int* novi_n){
    int z = 0;
    int* novi_niz = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        
        int duplikat = 0;
        
        for(int j = 0; j < z; j++){
            
            if(niz[i] == novi_niz[j]){
                
                duplikat = 1;
                break;
                
            }
        }
        
        if(!duplikat){
            novi_niz[z] = niz[i];
            z++;
        }
    }
    
    novi_niz = (int*) realloc(novi_niz, z * sizeof(int));
    *novi_n = z;
    return novi_niz;
}


int* dodaj_u_sredinu(int* niz, int* n, int broj){
    
    int nova_velicina = *n + 1;
    int sredina = *n / 2;
    

    
    for(int i = nova_velicina - 1; i > sredina; i--){
        niz[i] = niz[i - 1];
    }
    niz[sredina] = broj;
    
    
    *n = nova_velicina;
    
    return niz;
}
                                                         



int main(){
    
    int niz[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(niz) / sizeof(niz[0]);
    int novi_n;
    int broj = 88;
    
//    char* niz1[] = {"BMW","Audi","Mercedes","Pagani","McLaren","Fiat","Peugeot","Citroen","Chevy","Lada"};
//    char* niz2[] = {"Audi","Pagani","Rolls","Renault","Lada","Buick","Peugeot"};
//    
//    int nth;
//    int n1 = sizeof(niz1)/sizeof(niz1[0]);
//    int n2 = sizeof(niz2)/sizeof(niz2[0]);
//    char** x = u_oba_stringa(niz1, niz2, n1, n2, &nth);
//    for(int i = 0; i < nth; i++){
//        printf("%s\n",x[i]);
//    }
//    
//    int* t = ukloni_duplikate(niz, n, &novi_n);
//    for(int i = 0; i < novi_n; i++){
//        printf("%d\n",t[i]);
//    }
    
    int* novi_niz = dodaj_u_sredinu(niz, &n, broj);
    
    for(int i = 0; i < n; i++){
        printf("%d\n", novi_niz[i]);
    }
    

}
