/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 29 de Novembro de 2018, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void copia_string(char str[]){
    int tam;
    char str2[MAX];
    printf("Insira a string");
    scanf("%s",str);
    printf("Quantos caracteres deseja");
    scanf("%d",&tam);
    int i;
    for(i = 0; i<tam && str[i] != '\0'; ++i)
    {
        str2[i] = str[i];
    }
    str2[i] = '\0';

    printf("%s",str2);
}

int main(int argc, char** argv) {
    char string[MAX];
    copia_string(string);
}

