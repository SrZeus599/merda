/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 5 de Novembro de 2018, 11:38
 */

#include <stdio.h>
#include <stdlib.h>
    
int main(int argc, char** argv) {
    char string[100];
    int i,spaces;
    
    printf("Escreva a string ");
    gets(string);
    for (i=0; string[i] != '\0'; ++i); 
    
    printf("Tamanho da string: %d\n", i);
    return (EXIT_SUCCESS);
}

