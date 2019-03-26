/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 2 de Novembro de 2018, 15:04
 */

#include <stdio.h>
#include <stdlib.h>


int tudo(int y,int arr[],int x){
    
    if (x>=0)
        if(arr[x]% 2 == 0)
            return 0;
        else
            return 1;
    else
        return -1;
}

int main(int argc, char** argv) {
    
    int i,t,indice;
    int array[100];
    
    printf("Escreva o tamanho da array");
    scanf("%d", &t);
    
    printf("Escreva %d elementos do array: ", t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Escrever indice:");
    scanf("%d",&indice);
   
    i=tudo(t,array,indice);
    
    switch (i){
        case -1:printf ("Invalido");
                break;
        case 0: printf("Par");
                break;
        case 1: printf("Impar");
                break;
    }
}

