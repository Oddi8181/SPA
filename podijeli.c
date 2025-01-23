//#include<stdio.h>
//#include<stdlib.h>
//
//int** podijeli(int* niz, int n){
//    
//    int j = n/2;
//    int* prva_kopija = (int*) malloc(j * sizeof(int));
//    int* druga_kopija = (int*) malloc((n - j) * sizeof(int));
//    int i;
//    
//    
//    for(i = 0; i < j; i++){
//        prva_kopija[i] = niz[i];
//    }
//    for(i = 0; i < (n - j); i++){
//        druga_kopija[i] = niz[j + i];
//    }
//    
//    
//    int** rezultat = (int**) malloc(2 * sizeof(int));
//    rezultat[0] = prva_kopija;
//    rezultat[1] = druga_kopija;
//    
//    return rezultat;
//}
//

//int main(){
//    int niz[] = {1,2,3,4,5,6,7,8};
//    int n = sizeof(niz) / sizeof(niz[0]);
//    
//    int** rez = podijeli(niz, n);
//    int j = n / 2;
//    int i;
//    
//    printf("Prvi dio:");
//    for(i = 0; i < j; i++){
//        printf("%d", rez[0][i]);
//    }
//    printf("\n");
//    
//    
//    printf("Drugi dio:");
//    for(i = 0; i < (n - j); i++){
//        printf("%d", rez[1][i]);
//    }
//    printf("\n");
//    
//    
//    free(rez[0]);
//    free(rez[1]);
//    free(rez);
//    return 0;
//    
//}
//
