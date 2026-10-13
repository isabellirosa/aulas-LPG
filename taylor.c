#include <stdio.h>

int main() {

    double x;
int n, i, j;
printf("Digite x e a quantidade de termos n: ");
scanf("%lf%d", &x, &n);
double e_x = 0; // inicializa somatório com zero
for( i = 0 ; i <= n ; i++ ){ // gera os termos
  double termo = 1;
  for( j = 1 ; j <= i ; j++ ){ 
    termo = termo * x / j;
  }
  e_x = e_x + termo; // Acumula termo no somatório
}
printf("e elevado a %.3lf = %.15lf\n", x, e_x);

}