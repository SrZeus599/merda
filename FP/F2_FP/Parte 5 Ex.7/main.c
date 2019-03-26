/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 27 de Outubro de 2018, 16:10
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
    int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {{5,5,5},{6,6,6},{7,7,7}};   
    int soma[3][3];
    int somatorio = 0;
    int linha, coluna=0;
    printf("A matriz 1 é:\n");
    for (linha=0; linha<3; linha++)
     {
        for(coluna=0; coluna<3; coluna++)
            {printf("%d     ", matriz1[linha][coluna]);}
            printf("\n");
     }
    printf("\n");
    printf("A matriz 2 é:\n");
    for (linha=0; linha<3; linha++)
     { 
        for(coluna=0; coluna<3; coluna++)
            {printf("%d     ", matriz2[linha][coluna]);}
            printf("\n");
     }
    printf("\n");
    printf("A soma das matrizes (matriz3) é:\n");
    for (linha=0; linha<3; linha++)
     { 
        for(coluna=0; coluna<3; coluna++)
            {soma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
         printf("%d\t", soma[linha][coluna]);}
            printf("\n");
     }
    
    printf("\n");
    printf("O somatório de todos os elementos da matriz 3 é ");
    for (linha=0; linha<3; linha++)
     { 
        for(coluna=0; coluna<3; coluna++)
            {somatorio += soma[linha][coluna];}
     }
    printf("%d\n",somatorio);  
}
  


