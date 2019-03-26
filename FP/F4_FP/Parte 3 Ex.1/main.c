/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 29 de Outubro de 2018, 14:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char palavra[50];
    printf("Escreva uma palavra(frase) para a string:\n");
    scanf("%[^\n]", palavra);
    
    printf("Agora insira uma posiçao (nº inteiro) dentro da string\n");
    int n,i;
    scanf("%d", &n);
    
   // for (i=0;i<n;i++){
     // printf("%c",palavra[i]);  
    //}
    for (i=0;i<n;i++){
        printf("%c",palavra[n+i]);
    }
    return (EXIT_SUCCESS);
}

