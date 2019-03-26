/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 10 de Novembro de 2018, 19:00
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

void quadrante(int mat[MAX][MAX],int x, int y){
	int co1,co2;

	printf("Insere os valores de X e Y: ");
	scanf("%d %d",&co1,&co2);

	if( co1 > 0 && co2 > 0)
	  printf("O ponto de coordenadas (%d,%d) situa-se no primeiro quadrante.\n",co1,co2);
	else if( co1 < 0 && co2 > 0)
	  printf("O ponto de coordenadas (%d,%d) situa-se no segundo quadrante.\n",co1,co2);
	else if( co1 < 0 && co2 < 0)
	  printf("O ponto de coordenadas (%d, %d) situa-se no terceiro quadrante.\n",co1,co2);
	else if( co1 > 0 && co2 < 0)
	  printf("O ponto de coordenadas (%d,%d) situa-se no quarto quadrante.\n",co1,co2);
	else if( co1 == 0 && co2 == 0)
	  printf("O ponto de coordenadas (%d,%d) situa-se na origem.\n",co1,co2);

}
int main(int argc, char** argv) {
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
    quadrante(mat,a,b);
}

