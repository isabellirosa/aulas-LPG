
#include <stdio.h>

int main()
{
    float notas[] = {0, 0, 0, 0, 0};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("digite a nota %d:", i + 1);
        scanf("%f", &notas[i]);
    }

    float soma = 0;
    float media;

    for (i = 0; i < 5; i++)
    {
        soma = soma + notas[i];
    }

    media = soma / 5;

    printf("A média é: %f \n", media);

    float substitutiva;

    if (media >= 6)
    {
        printf("aprovado\n");
    }
    else
    {
        printf("Digite a nota da prova subtitutiva\n");
        scanf("%f", &substitutiva);

        float menornota = notas[0];
        int indicemenornota;

        for (i = 0; i < 5; i++)
        {
            if (notas[i] < menornota)
            {
                menornota = notas[i];
                indicemenornota = i;
            }
        }

        if (substitutiva <= menornota)
        {
            printf("game over\n");
        }
        else
        {
            float novanota = (substitutiva + menornota) / 2;
            notas[indicemenornota] = novanota;
            float soma2 = 0;
            float media2;
            for (i = 0; i < 5; i++)
            {
                soma2 = soma2 + notas[i];
            }
            media2 = soma2 / 5;
            printf("A média final é: %f \n", media2);

            if (media2 >= 6)
            {
                printf("aprovado\n");
            }
            else
            {
                printf("game over\n");
            }
        }
    }
}