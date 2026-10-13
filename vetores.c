// #include <stdio.h>

// int main()
// {
//     int v[10];
//     int i;

//     for(i=0; i <10; i++){
//         printf("digite o %d valor:", i+1);
//         scanf("%d", &v[i]);
//     }

//     for(i=0; i <1000; i++){
//         printf("%d : %d\n", i, v[i]);
//     }
// }

#include <stdio.h>

int main()
{
    float valores[10];
    int i;

    for(i=0; i <10; i++){
        printf("digite o valor %d:", i+1);
        scanf("%f", &valores[i]);
    }

    float maior = 0;
    float soma = 0;
    float media;

    for(i=0; i <10; i++){
        soma = soma + valores[i];
        if(valores[i] > maior){
            maior = valores[i];
        }
    }

    printf("O maior valor é %f\n", maior);
    media = soma/10;
    printf("O media é %f\n", media);

    printf("Os valores maiores que a média são: \n");
    for(i=0; i <10; i++){
        if(valores[i] > media){
            printf("%f\n", valores[i]);
        }
    }

}