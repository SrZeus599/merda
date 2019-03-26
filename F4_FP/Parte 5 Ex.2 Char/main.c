/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 10 de Novembro de 2018, 16:37
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void repeticao(char str[],char key){
    int count=0;
    for(int i=0; i<MAX; i++) { 
        if (str[i] == key){
            count++; 
        }       
    }  
    if(count ==1)
        printf("O caracter %c é repetido %d vez\n", key, count);  
    if(count >1)
        printf("O caracter %c é repetido %d vezes\n", key, count);
    else
        printf("O caracter nao esta presente\n");
}



int main(int argc, char** argv) {
    char c;
    int cont = 0;
    char string[MAX];
    printf("Escreva uma palavra(frase) para a string:\n");
    scanf("%[^\n]", string);
    printf("Insira um caracter: ");
    scanf(" %c",&c);
    
    repeticao(string,c);
       
    }



