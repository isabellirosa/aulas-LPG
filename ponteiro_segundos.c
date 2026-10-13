#include <stdio.h>

void horas(int *tempo, int *h, int *min, int *seg)
{
    *h = *tempo / 3600;
    *tempo = *tempo - (*h * 3600);

    *min = *tempo / 60;
    *tempo = *tempo - (*min * 60);

    *seg = *tempo;
}

int main()
{
    int tempoSeg, h, minutos, segundos;

    scanf("%d", &tempoSeg);

    horas(&tempoSeg, &h, &minutos, &segundos);

    printf("horas: %d minutos: %d segundos: %d\n",
           h, minutos, segundos);

    return 0;
}