//#include<stdio.h>
//#include<stdlib.h>
//
//int* filtriraj(int *niz, int n, int th, int *nth){
//    
//    int j = 0;
//    for (int i = 0; i < n; i++)
//        if (niz[i] < th) {
//            j++;
//        }
//    int* novi_niz = (int*) malloc(j * sizeof(int));
//    j = 0;
//    for(int i = 0; i < n; i++){
//        if(niz[i] < th){
//            novi_niz[j] = niz[i];
//            j++;
//        }
//    }
//    *nth = j;
//
//    
//    return novi_niz;
//}
//
//
//int main(){
//    int niz[] = {3,22,15,6,13,63,24};
//    int n = sizeof(niz)/sizeof(niz[0]);
//    int th = 16;
//    int nth;
//    int* x = filtriraj(niz, n, th, &nth);
//    
//    for(int i = 0; i < nth; i++){
//        printf("%d ", x[i]);
//    printf("\n");
//    
//    }
//    free(x);
//    return 0;
//}