#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int somadiagonal(int linhas, int colunas, int matriz[MAX][MAX]){
    int soma=0,i,j;
    
    if (linhas==colunas){
        for (i=0;i<linhas;i++);{
            soma= soma + matriz[i][i];
        }
        printf("O resultado da soma é %d\n", soma);
        return soma;
    }
    else
        printf("Erro não é quadrada\n");
        return -1;
              
}

int main(int argc, char** argv) {   
    int nl, nc, mat[MAX][MAX],i,j, res;

    printf("Quantas linhas? ");
    scanf("%d", &nl);
    if (nl>0 && nl<=MAX){
        printf("Quantas colunas? ");
        scanf("%d", &nc);
        if (nc>=0 && nc<=MAX){
            for (i=0;i<nl;i++){
                for (j=0;j<nc;j++){
                    printf ("Introduza o valor para o indice %d-%d: ", i, j);
                    scanf("%d", &mat[i][j]);
                }
            }
            res=somadiagonal(nl,nc,mat);
            if (res==-1){
                printf("Erro não é quadrada");
            }
            else
                printf("A soma - %d",res);
        }
        else 
            printf ("Numero de colunas invalido!!!!");
    }
    else 
        printf("Numero de linhas invalido!!!!");

    
}

