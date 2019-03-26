/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 5 de Novembro de 2018, 15:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
/*

void somatorio_2p(int o,int matriz[MAX][MAX]){
    int i,j;
    for (i=0; i<=MAX; i++){
            for (j=0; j<=o; j++){
                double d = sqrt(pow(matriz[i]-matriz[i+1],2) + pow(matriz[j]-matriz[j],2));
            }
}
}
*/
struct Ponto2D {
    float x, y;
};
float somadistancias (struct Ponto2D arraypontos[], int tam) {
int x1, x2, y1, y2, i;
    for (i=0;i<tam-1;i++) {
        x1 = arraypontos[i].x;
        y1 = arraypontos[i].y;
        x2 = arraypontos[i+1].x;
        y2 = arraypontos[i+1].y;
    }
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
   
int main(int argc, char** argv) {
/*
    printf("Insira o numero de colunas");
    int a; 
    scanf("%d", &a);
    printf("Insira o numero de linhas");
    int b; 
    scanf("%d", &b);
    int mat[a][b];
    printf("Escreva os elementos da matriz:\n");
        for (int i=0; i<a; i++){
            for (int j=0; j<b; j++){
                scanf("%d",&mat[i][j]);
        }
    }
    somatorio_2p(b,mat);
    printf("%d",somatorio_2p);
    
*/
    
    struct Ponto2D array[MAX];
    somadistancias(array, 4);

    return 0;
}



