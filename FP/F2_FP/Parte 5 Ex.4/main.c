/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 26 de Outubro de 2018, 19:21
 */

#include <stdio.h>
#include <stdlib.h>




int main(int argc, char** argv) {
   char palavra[50];
    printf("Escreva uma palavra(frase) para a string:\n");
    scanf("%[^\n]", palavra);
    
    printf("Agora insira uma posiçao (nº inteiro) dentro da string\n");
    int n;
    scanf("%i", &n);
    
    printf("o caracter da posição escrita é:%c\n o caracter seguinte é:%c\n o caracter anterior é:%c\n",palavra[n-1],palavra[n],palavra[n-2]);
    
   
    return (EXIT_SUCCESS);
}

