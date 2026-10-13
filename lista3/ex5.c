#include <stdio.h>
int busca_seq_rec(int v[], int n, int chave){

    if(n == 0){

        if(v[0] == chave){
            return 0;
        }

        return -1;
    }

    if(v[n] == chave){
        return n;
    }

    return busca_seq_rec(v, n - 1, chave);
}

int main() {

    int n, chave;
    scanf("%d", &n);

    int vetor[n];

    for(int i =0; i < n; i++){
        printf("escreva o termo %d do vetor ", i);
        scanf("%d", &vetor[i]);
    }

    printf("digite a chavec");
    scanf("%d", &chave);

    int resultado = busca_seq_rec(vetor, n - 1, chave);

    if(resultado == -1){
        printf("nao achou\n");
    }else{
        printf("achou no indice %d\n", resultado);
    }

    return 0;

}