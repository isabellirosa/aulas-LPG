// #include <stdio.h>

// #define MAX 10

// float calcula_media(float vet[], int n)
// {
//     float soma = 0;

//     for(int i = 0; i < n; i++)
//     {
//         soma = soma + vet[i];
//     }

//     return soma / n;
// }

// int main()
// {
//     float v[MAX] = {6, 9, 4, -3, 17, 22, 13, 81, 44, 32};

//     float media = calcula_media(v, MAX);

//     printf("Média: %f\n", media);

//     return 0;
// }



#include <stdio.h>

#define MAX 10

void le_vetor(float vet[], int n)
{

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &vet[i]);
    }

}

float mostra_vetor(float vet[], int n)
{
    for(int i = 0; i < n; i++)
    {
       printf("%d: %f\n", i, vet[i]);
    }    
}

void ordena_vetor(float vet[], int n)
{
    int i, j;
   for(i = 0; i < n-1; i++){
      int i_menor = i;	
      for(j = i+1; j < n; j++)
         if( vet[j] < vet[i_menor] )
            i_menor = j;
    
      int aux = vet[i];
      vet[i] = vet[i_menor];
      vet[i_menor] = aux;


   }
}

int main()
{
    float v[MAX] = {0};

    le_vetor(v, MAX);
    mostra_vetor(v, MAX);
    ordena_vetor(v, MAX);
    printf("vetor ordenado:\n");
    mostra_vetor(v, MAX);

    return 0;
}