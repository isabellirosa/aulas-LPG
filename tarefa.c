#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    float graus, radianos;

    printf("Digite os graus: ");
    scanf("%f", &graus);

    int n;

    printf("Digite quantos termos deseja: ");
    scanf("%i", &n);

    radianos = (graus * PI) / 180; // transforma graus em radianos

    double cos = 1; // começa com 1 porque o primeiro termo da formula do cos é 1

    for (int i = 2; i <= (n * 2); i += 2) // esse for começa em 2 e aumenta de 2 em 2 porque na formula do cos os expoentes são sempre pares
    {
        double termo = 1; // começa o termo em 1 para depois calcular o expoente e o fatorial

        for (int j = 1; j <= i; j++) // esse for calcula o expoente e o fatorial ao mesmo tempo, fazendo i operações
        {
            termo = termo * radianos / j; // multiplica pelo radiano e divide pelo numero atual do fatorial
        }

        if (i % 4 == 0) // verifica se o expoente é multiplo de 4 para saber se o termo deve ser somado ou subtraido
        {
            cos = cos + termo; 
        }
        else
        {
            cos = cos - termo; 
        }
    }

    printf("\n");
    printf("cos = %lf\n", cos);

    double sen = radianos; // começa com radianos porque o primeiro termo da formula do seno é x

    for (int i = 3; i <= (n * 2); i += 2) // esse for começa em 3 e aumenta de 2 em 2 porque os expoentes do seno são impares
    {
        double termo = 1; // começa o termo em 1 para calcular o expoente e o fatorial

        for (int j = 1; j <= i; j++) // esse for calcula o expoente e o fatorial ao mesmo tempo
        {
            termo = termo * radianos / j; // multiplica pelo radiano e divide pelo numero atual do fatorial
        }

        if ((i - 1) % 4 == 0) // verifica qual deve ser o sinal do termo de acordo com a sequencia da formula do seno
        {
            sen = sen + termo; 
        }
        else
        {
            sen = sen - termo; 
        }
    }

    printf("\n");
    printf("sen = %lf\n", sen);

    double tg = sen / cos; // calcula a tangente dividindo o seno pelo cosseno

    printf("\n");
    printf("tangente = %lf\n", tg);

    return 0;
}