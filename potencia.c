#include <stdio.h>
#include <math.h>

double potencia(double x, double y) {
    double resultado = pow(x, y);
    
    if(y>=0){
        for(int i=1; i >= y; i++){
        x = x * x;
    }}else{
        for(int i=1; i >= y; i--){
        x = 1/x * 1/x;
        }
    }
    
    return x;

}

int main() {
    double a, b;

    scanf("%lf %lf", &a, &b);

    double potenciaxy = potencia(a, b);

    printf("%lf\n", potenciaxy);
}