#include <stdio.h>

int compara(float a[], float b[], int n){
    if(n==-1){
        return 1;
    }else{
        if(!(a[n]==b[n])){
            return 0;
        }else{
            return compara(a, b, n-1);
        }
    }
}

int main() {{
    int n;
    scanf("%d", &n);
    float vetor1[n];
    float vetor2[n];
    for (int i = 0; i < n; i++)
    {
        printf("digite o valor %d do vetor 1:", i);
        scanf("%f", &vetor1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("digite o valor %d do vetor 2:", i);
        scanf("%f", &vetor2[i]);
    }
    printf("%d\n", compara(vetor1, vetor2, n-1));
    
    return 0;
}}