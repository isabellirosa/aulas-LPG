#include <stdio.h>

int soma_especial(int n, int k, int x){
    
if(n == 0){
    return 0;
}

if(n > 0){
int resto = x%k;
int multiplo = x + (k - resto);
return multiplo + soma_especial(n-1, k, multiplo);
}
}

int main(){
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);
    printf("%d\n", soma_especial(n,k,x));
    
    return 0;
}

