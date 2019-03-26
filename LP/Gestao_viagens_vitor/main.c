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
#include "../../API_Leitura/API_Leitura.h"
#include "../../API_Leitura/API_Utils.h"
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
  char carro[15];  
    struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
    
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
    
    do{
    printf("1-Inserir portagens\n");
    printf("0-Sair\n");
    readInt(&escolha,0,1,"");
    printf("Insira a marca do seu carro: ");
    fgets(carro, sizeof(carro), stdin);
    printf("\n");
    readInt(&dia,1,31,"Insira o dia: ");
    printf("\n");
    readInt(&mes,1,12,"Insira o mes: ");
    printf("\n");
    readInt(&ano,2019,2020,"Insira o ano: ");
    printf("\n");
    readInt(&hora,1,24,"Insira a hora: ");
    printf("\n");
    readInt(&minutos,0,59,"Insira os minutos: ");
    printf("\n");
    if(0<mes<13){
        if(0<dia<32 && mes=1 || mes=3 || mes=5 || mes=7 || mes=8 || mes=10 
                || mes=12){
            printf("%d/%d/%d",dia,mes,ano);
        }
        else(dia=31 && mes=4 || mes=6 || mes=9 || mes=11 && ano>2020 
                || ano<2019 || (28<dia<32 && mes=2)){
            printf("Insira datas validas\n");
        }
    }
    switch (escolha){
        
    case 1:
       
    readInt(&p1,0,4,"Insira a primeira portagem que passou: ");
    printf("\n");
    readInt(&p2,0,4,"insira a segunda portagem que passou: ");
    printf("\n");
    if(p2<=4 && p1 != p2){
            printf("o valor a pagar e %0.1f euros, pelo que percorreu uma "
                        "distancia de %0.1f km\n",matriz[p1][p2].preco,
                        matriz[p1][p2].dist);
        }
        else{ 
            printf("As portagens nao podem ser as mesmas!\n");
        }
    
         
     
    } 
    }  
    while (escolha!=0);   
}