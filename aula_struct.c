#include <stdio.h>

struct Aluno
{
    char nome[50];
    float notas[5];
    float media;
    float subst;
};

int main()
{
    struct Aluno alunos[2];

    for (int i = 0; i < 2; i++)
    {
        printf("digite o nome do aluno %d: ", i);
        scanf("%49s", alunos[i].nome);
        float somanotas = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("digite a nota %d do aluno %d: ", j, i);
            scanf("%f", &alunos[i].notas[j]);
            somanotas += alunos[i].notas[j];
        }
        alunos[i].media = somanotas / 5;
    }

    for (int i = 0; i < 2; i++)
    {
        if (alunos[i].media < 6)
        {
            printf("media aluno %d menor que 6 digite a substitutiva: ", i);
            scanf("%f", &alunos[i].subst);
            int menornota = alunos[i].notas[0];
            int indicemenor = 0;
            for (int j = 0; j < 5; j++)
            {
                if (menornota > alunos[i].notas[j])
                {
                    menornota = alunos[i].notas[j];
                    indicemenor = j;
                }
            }
            alunos[i].notas[indicemenor] = alunos[i].subst;

            float somanotas = 0;
            for (int k = 0; k < 5; k++)
            {
                somanotas += alunos[i].notas[k];
            }
            alunos[i].media = somanotas / 5;
        }
        else
        {
            printf("Aluno %d aprovado, a media final é : %f \n", i, alunos[i].media);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (alunos[i].media < 6)
        {
            printf("Aluno %d reprovado, a media final é : %f \n", i, alunos[i].media);
        }
        else
        {
            printf("Aluno %d aprovado, a media final é : %f \n", i, alunos[i].media);
        }
    }
}
