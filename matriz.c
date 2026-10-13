// #include <stdio.h>

// int main(){
//     int i,j;
//     scanf("%d,%d", &i,&j);
//     int mat[i][j];

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             scanf("%d", &mat[a][b]);
//         }
//     }

//     float somaPares = 0;
//     int qtdPares = 0;
//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             if(mat[a][b]%2==0){
//                 somaPares += mat[a][b];
//                 qtdPares ++;
//             }
//         }
//     }
//     float media = somaPares/qtdPares;

//     printf("a media é %f", media); 
// }



// #include <stdio.h>

// int main(){
//     int i,j;
//     scanf("%d %d", &i,&j);
//     int mat[i][j];

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             printf("digite o valor da linha %d e coluna %d:", a,b);
//             scanf("%d", &mat[a][b]);
//         }
//     }

//     int matTransposta[j][i];

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             matTransposta [b][a] = mat[a][b];
//         }
//     }

//     for(int a=0; a < j; a++){
//         printf("\nLinha %d da matriz tranposta:", a);
//         for(int b=0; b < i; b++){
//             printf(" %d ", matTransposta[a][b]);
//         }
//     }
  

// }

// #include <stdio.h>

// int main(){
//     int i,j;
//     scanf("%d %d", &i,&j);
//     int mat[i][j];
//     int mat2[i][j];

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             printf(" Matriz 1: digite o valor da linha %d e coluna %d:", a,b);
//             scanf("%d", &mat[a][b]);
//         }
//     }

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             printf(" Matriz 2: digite o valor da linha %d e coluna %d:", a,b);
//             scanf("%d", &mat2[a][b]);
//         }
//     }

//     int matSoma[i][j];

//     for(int a=0; a < i; a++){

//         printf("\nLinha %d da matriz soma:", a);

//         for(int b=0; b < j; b++){
//             matSoma[a][b] = mat[a][b] + mat2[a][b];
//             printf(" %d ", matSoma[a][b]);
//         }
//     }

// }

// #include <stdio.h>

// int main(){
//     int i,j;
//     scanf("%d %d", &i,&j);
//     int mat[i][j];

//     for(int a=0; a < i; a++){
//         for(int b=0; b < j; b++){
//             printf(" Matriz: digite o valor da linha %d e coluna %d:", a,b);
//             scanf("%d", &mat[a][b]);
//         }
//     }

//     printf("diagonal secundaria:");
//     int b = j - 1;
//     for(int a=0; a < i; a++){
//            printf(" %d ", mat[a][b]);
//         b--;
//     }
// }


#include <stdio.h>

void insereNotas( int x, int y, float matriz[x][y]){
    scanf("%f", &matriz[x][y]);
}
void mediaAluno (int a, int x, int y, float notasAluno[x][y], float medias[x]){
    float soma = 0;
    for(int i=0; i < y; i++){
        soma = soma + notasAluno[a][i];
    }
    medias[a]=(soma/y);
}

void imprimeMedia(int a, int x, float matriz[x]){
    printf("\n%f", matriz[a]);
}

int main(){
    int i,j;
    printf("digite o numero de alunos e depois o de provas ");
    scanf("%d %d", &i,&j);
    float notas[i][j];

    for(int a=0; a < i; a++){
        for(int b=0; b < j; b++){
            printf("digite a nota %d do aluno %d:", a,b);
            insereNotas(a, b, notas);
        }
    }

    float medias[i];

    for(int a=0; a < i; a++){
        mediaAluno(a,i,j, notas, medias);
    }

    for(int a=0; a < i; a++){
        imprimeMedia(a, i, medias);
    }



}
