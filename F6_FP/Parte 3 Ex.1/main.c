/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 12 de Novembro de 2018, 15:05
 */

#include <stdio.h>
#include <stdlib.h>
#include "..\API_Leitura\API_Leitura.h"

int adivinha(int num){
    int tentativas = 1, opt, dif,max_tentativas=3;
    
    readInt(&opt, 0, 100, "Digite um número entre 0 e 100: ");
    
    while(opt != num && tentativas < max_tentativas){
        dif = abs(opt - num);
        
        if(dif < 5)
            printf("A escaldar!\n");
        else if (dif < 10)
            printf("Quente\n");
        else if (dif < 30)
            printf("Morno");
        else printf("Frio...");
        
        tentativas++;
        readInt(&opt, 0, 100, "Digite um número entre 0 e 100: ");}
    if (tentativas == max_tentativas)
    {
        printf("Não acertou após atingir o limite de tentativas...\n");
        return -1;
    }else{
        printf("Acertou após %d tentativas!\n",tentativas);
        return tentativas; 
    }
}
int main(int argc, char** argv) {
    adivinha(2);

    
}

