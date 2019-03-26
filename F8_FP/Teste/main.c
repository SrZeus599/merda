/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 3 de Dezembro de 2018, 14:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "..\..\API_Leitura\API_Leitura.h"
#include "..\..\API_Leitura\API_Utils.h"

void imprimeLista (int *lista, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d", lista[i]);
    }
}

void leNumeros(int *lista, int n){
    int i;
    for (i = 0; i < n; i++){
        readInt(lista, 0, 1000, "Digite o numero: ");
        lista++;
    }
}

int main(int argc, char** argv) {
    int *lista = NULL, n;
    readInt(&n, 1, 1000, "Quantos números pretende introduzir? ");
    lista = (int*) malloc(n* sizeof(int));
    
    if (lista == NULL){
        printf("Alocação de memória falhou!");
    }
    else{
        leNumeros(lista, n);
        imprimeLista(lista, n);
        
        free(lista);
    }
    
    return 0;
}

