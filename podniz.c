//#include<stdio.h>
//#include<stdlib.h>
//
//int* podniz(int* niz, int start, int stop){
//    
//    int j = stop - start;
//    int* novi_niz = (int*) malloc(j * sizeof(int));
//    
//    int i;
//    
//    for( i = 0; i < j; i++){
//        novi_niz[i] = niz[start + i];
//    }
//    return novi_niz;
//}
//
//int main(){
//    int niz[] = {1,2,3,4,5,6,7,8,9};
//    int start = 2;
//    int stop = 6;
//    
//    int* x = podniz(niz, start, stop);
//    
//    for(int i = 0; i < stop - start; i++){
//        printf("%d\n", x[i]);
//    }
//    
//    free(x);
//    
//    return 0;
//}
