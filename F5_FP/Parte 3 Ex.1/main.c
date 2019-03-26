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
#define MAX 50

void achar_tamanho(char str[MAX]){
    int i;
    printf("Escreva a string ");
    fgets(str,MAX,stdin);
 
    for(i = 0; str[i] != '\n'&& str[i] != '\0'; ++i)
        printf("%c\n",str[i]);
    printf("O tamanho da string:%d\n", i);
    
}
int main(int argc, char** argv) {
    char string[MAX];
    achar_tamanho(string);

}

