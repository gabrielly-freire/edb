#include <stdio.h>
#include <stdlib.h>

void juntar(int *v, int n, int m) {
    int i = 0, pp = 0, qq = m;

    int *tmp = (int *) malloc(n*sizeof(int));

    while(pp < m && qq < n){
        if(v[pp] < v[qq]){
            tmp[i++] = v[pp++];
        } else {
            tmp[i++] = v[qq++];
        }
    }

    while(pp < m){
        tmp[i++] = v[pp++];
    }
    while(qq < n){
        tmp[i++] = v[qq++];
    }

    for(i = 0; i < n; i++){
        v[i] = tmp[i];
    }
    free(tmp);
}

void mergesort(int *v, int n){
    if(n <= 1)
        return;
    int meio = n/2;
    mergesort(v, meio);
    mergesort(v+meio, n-meio);
    juntar(v, n, meio);
}

int main(){
    int v[] = {1, 2, 6, 10, 3, 1};

    mergesort(v, 6);

    for (int i = 0; i < 6; i++){
        printf("%d ", v[i]);
    }
    return 0;
}