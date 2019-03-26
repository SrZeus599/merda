/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 10 de Novembro de 2018, 14:35
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <math.h>

void operacao(int arr[], int t, int operador) {
   int i;
   int res[t];
   for (i = 0; i <=t; i++){     
       res[i] = pow(arr[i], arr[operador-1]);     //pow = ^
            printf("%d ",res[i]);  
   }
}

int main(int argc, char** argv) {
    int i,n,tam,z=0;
    int a[MAX];
    int array[MAX];
    printf("Escolha o tamanho do array: ");
    scanf("%d",&tam);
    if (tam ==0){
        printf("invalido");        
    }
    if(tam >0){
    for(i=0; i<tam; ++i)
    {
          printf("Escreve o %dº numero: ",i+1);
          scanf("%d", &array[i]);
    }
    printf("Escolha um elemento do array");
    scanf("%d",&n);
    }
    for (i = 0; i < tam; i++){
        a[i]=array[i];         
    }  
    operacao(a,tam-1,n);
}


    
 


