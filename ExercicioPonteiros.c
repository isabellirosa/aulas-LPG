#include <stdio.h>

void concatena(char *s1, char *s2, int maxS1)
{
  int tamS1 = 0, tamS2 = 0;
  char *i1 = s1;
  while (s1[i1 - s1] != '\0')
  {
    tamS1++;
    i1++;
  }
  char *i2 = s2;
  while (s2[i2 - s2] != '\0')
  {
    tamS2++;
    i2++;
  }
  if (tamS1 + tamS2 > maxS1)
  {
    printf("Erro: tamanho insuficiente");
  }
  else
  {
    char *finalS1 = s1 + tamS1;
    char *posicaoAtual = s1 + tamS1;
    while (posicaoAtual - finalS1 <= tamS2)
    {
      s1[tamS1 + (posicaoAtual - finalS1)] = s2[posicaoAtual - finalS1];
      s2[posicaoAtual - finalS1] = '*';
      posicaoAtual++;
    }
    s1[tamS1 + tamS2] = '\0';
  }
}

int main()
{
  int n;
  printf("digite o valor maximo de caracteres por string: ");
  scanf("%d", &n);
  char str1[n + 1];
  char str2[n + 1];
  printf("Digite a string 1:");
  scanf(" %[^\n]", str1);
  printf("Digite a string 2:");
  scanf(" %[^\n]", str2);
  printf("Str1 = '%s'\n", str1);
  printf("Str2 = '%s'\n", str2);

  concatena(str1, str2, n);

  printf("Str1 (Junto com Str2) = '%s'\n", str1);
  printf("Str2 = '%s'\n", str2);
}