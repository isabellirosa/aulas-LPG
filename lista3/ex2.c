#include <stdio.h>

void fibonacci(int v[], int n){

    if(n >= 1){
        v[0] = 1;
    }

    if(n >= 2){
        v[1] = 1;
    }

    for(int i = 2; i < n; i++){
        v[i] = v[i-1] + v[i-2];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];

    fibonacci(vetor, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}