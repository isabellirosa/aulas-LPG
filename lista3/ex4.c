#include <stdio.h>
void busca_todos(int v[], int n, int chave, int indices[]){

    int quantidade = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i]==chave){
            indices[quantidade] = i;
            quantidade++;
        }
    }

    for (int i = quantidade; i < n; i++)
    {
        indices[i] = -1;
    }
    
    
};

int main() {

    int n, chave;
    scanf("%d", &n);

    int vetor_entrada[n];
    int vetor_saida[n];

    for(int i =0; i < n; i++){
        printf("escreva o termo %d do vetor ", i);
        scanf("%d", &vetor_entrada[i]);
    }

    printf("escreva a chave ");
    scanf("%d", &chave);

    busca_todos(vetor_entrada, n, chave, vetor_saida);

    for(int i=0; i < n; i++){
        printf("%d ", vetor_saida[i]);
    }
    
    return 0;
}