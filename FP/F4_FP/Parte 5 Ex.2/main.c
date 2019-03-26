/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 9 de Novembro de 2018, 19:20
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int repeticao(int a[],int size,int key)
{
    int count=0,i;
    for(i=0; i<size; i++) { 
        if (a[i] == key)  count++;       //Conta as repetiçoes do numero
    }  
    return count;
}
int main(int argc, char** argv) {
    int i,n,cont = 0,tam;
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
    
    cont= repeticao(array,tam,n);
    if(cont ==1)
        printf("O numero %d é repetido %d vez\n", n, cont);  
    if(cont >1)
        printf("O numero %d é repetido %d vezes\n", n, cont);        
    }

}

