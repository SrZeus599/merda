/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 5 de Novembro de 2018, 11:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caracteres(char string[], char x) {
    int cont = 0;   
        
        for (int i = 0; i< strlen(string); i++) {
            if (string[i] == x) {
                cont++;
            }
        }
        printf("\nExiste esse caracter %d vezes", cont);
}
 

int main(int argc, char** argv) {
    char x; 
    char string[100] =("vamos todos embora");
    printf("Insira um caracter: ");
    scanf(" %c",&x);
    caracteres(string, x);
}

