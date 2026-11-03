#include <stdio.h>

void mostrar_vetor(int *v, int n){
    for(int i; i < n; i++){
        printf("%d\n", v[i]);
    }
}

int main()
{
    int v[7] = {4,3,6,10,2,1,9};
    mostrar_vetor(v,7);
    int *p = v;
    int *i = v + 6;
    while (p < i) {
    int aux = *p;
    *p = *i;
    *i = aux;

    p++;
    i--;
    }
    mostrar_vetor(v,7);
    return 0;
}