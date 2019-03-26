/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 3 de Dezembro de 2018, 15:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "..\API_Leitura\API_Leitura.h"
#include "..\API_Leitura\API_Utils.h"
#define TAM_INICIAL 20
/*
 * 
 */
void leNumeros (int *lista, int n) {
    int i;
    
    for (i=0; i<n; i++) {
        readInt(lista, 0, 1000, "Digite o numero: ");
        lista++;
    }
}

void redimenciona (int *lista, int n){
    
    
}
void imprimeLista (int *lista, int n) {
    
    int i;
    
    for (i=0; i<n; i++){
        printf("%d", lista[i]);
    }
}

int main(int argc, char** argv) {

    int *lista = NULL, nElem = 0, tam = 0;
    
    leNumeros (&lista, &nElem = 0, &tam);
    
    imprimeLista(lista, nElem);
    
    if(nElem > 0)
        free (lista);
}

    int *lista = NULL, *temp = NULL, n = 0, max = TAM_INICIAL, op;
    
    lista=(int*) malloc(TAM_INICIAL*sizeof(int));
    
    if (lista==NULL){
        printf("Alocacao de memoria falhou!");
    }
    else {
        leNumeros(lista, n);
            
            if (op>=0) {
                if (n>=max){
                    temp=(int*) realloc(lista, n*sizeof(int)+TAM_INICIAL*sizeof(int));
                    if (temp==NULL){
                        printf("Realocacao de memoria falhou!\n");
                        break;
                    }
                    else {
                        printf("Acrescentou %d bytes (total: %d bytes) \n",
                                n*sizeof(int),
                                n*sizeof(int)+TAM_INICIAL*sizeof(int));
                        lista=temp;
                        max += TAM_INICIAL;
                    }
                   
                }
                lista[n]=op;
                n++;
            }
        } while (op>=0);
        
        imprimeLista(lista, n);
        free (lista);
    }
    return 0;
}

