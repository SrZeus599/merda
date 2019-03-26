/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Vitor Eduardo
 *
 * Created on 12 de Dezembro de 2018, 15:18
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../API_Leitura/API_Utils.h"
#include "../../API_Leitura/API_Leitura.h"
#include "Utils.h"
#define NUM_PORTAGENS 5

/*
 *
 */

    
    
int main(int argc, char** argv) {
  int i, j;
  int p1,p2;
  int escolha;
  int minutos,hora,ano,mes,dia;
  char carro[20]; 
  int esc;
  int coluna,linha,pos;
  struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
  float matriz2[25];
  FILE *fp;
  float valor;
  
  
  
    preencheMatriz((struct lanco*) matriz, "Distancias.txt", true);
    preencheMatriz((struct lanco*) matriz, "Precos.txt", false);
    
    printf("Distancia«-»Preco\n\n");
    //imprimir conteúdos lidos de ficheiro, conjuntamente
    for (i=0;i<NUM_PORTAGENS;i++){
        for (j=0;j<NUM_PORTAGENS;j++){
            printf("%0.1f -> %0.1f\t", matriz[i][j].dist, matriz[i][j].preco);
        }
        printf("\n");
    }
  
   
    printf("\n");
    
  
    
    fp=fopen("Precos.txt","r");
    
    
    printf("Alterar preços\n");
    printf("Selecione a posicao do valor.\n");
    matriz[0][0].preco=matriz2[1];
    matriz[0][0].preco=matriz2[2];
    matriz[0][0].preco=matriz2[3];
    matriz[0][0].preco=matriz2[4];
    matriz[0][0].preco=matriz2[5];
    matriz[1][1].preco=matriz2[6];
    matriz[1][1].preco=matriz2[7];
    matriz[1][1].preco=matriz2[8];
    matriz[1][1].preco=matriz2[9];
    matriz[1][1].preco=matriz2[10];
    matriz[2][2].preco=matriz2[11];
    matriz[2][2].preco=matriz2[12];
    matriz[2][2].preco=matriz2[13];
    matriz[2][2].preco=matriz2[14];
    matriz[2][2].preco=matriz2[15];
    matriz[3][3].preco=matriz2[16];
    matriz[3][3].preco=matriz2[17];
    matriz[3][3].preco=matriz2[18];
    matriz[3][3].preco=matriz2[19];
    matriz[3][3].preco=matriz2[20];
    matriz[4][4].preco=matriz2[21];
    matriz[4][4].preco=matriz2[22];
    matriz[4][4].preco=matriz2[23];
    matriz[4][4].preco=matriz2[24];
    matriz[4][4].preco=matriz2[25];
    readInt(&pos,1,25,"-> ");
    readFloat(&valor,0,100,"Que valor pretende inserir?\n");
    
    for(i=1;i<=25;i++){
        for(j=1;j<=25;j++){ 
            printf("%0.1f",matriz[i][j]);
            matriz2[pos]=matriz[i][j];
            pos++;

        }
    }
    
    
    
    printf("\n\n Valores Alterados com sucesso: \n\n");
    printf("Distancia«-»Preco\n\n");
    for (i=0;i<NUM_PORTAGENS;i++){
        for (j=0;j<NUM_PORTAGENS;j++){
            printf("%0.1f -> %0.1f\t", matriz[i][j].dist, matriz[i][j].preco);
        }
        printf("\n");
    }
    
    
    
    //for(i)
    
    
    
    /*for(i=1;i<linha;i++){  
        for(j=1;j<coluna;j++){
            fprintf(fp, "%0.1f\t", matriz[linha][coluna].preco);
          
        }
    }*/
   /* valor = NULL;
    valor = fgetc(fp);
   while(1) {
        if (valor = EOF)
            break;
        //If it hits the end of the line, it's time to go to the next row.
        if (valor == '\n'){
            linha++;
            continue;
        }
        //Skips spaces
        if (valor == ' '){
            continue;
        }
        matriz[linha][coluna].preco = valor;
        valor = fgetc(fp);
    }
    fclose(fp);*/
}