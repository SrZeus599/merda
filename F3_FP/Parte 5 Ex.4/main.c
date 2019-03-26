/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 30 de Outubro de 2018, 21:36
 */

#include <stdio.h>
#include <stdlib.h>

void conta (float x, float y, char c){
    float n;
    if (c == '/'){
        n= x / y;
        printf("A divisão entre os dois valores é:%f",n);
    }
    if (c == '-'){
        n= x - y;
        printf("A subtração entre os dois valores é:%f",n);
    }    
    if (c == '*'){
        n= x * y;
        printf("A multiplicação entre os dois valores é:%f",n);
    }
    else {
        n= x + y;
        printf("A soma entre os dois valores é:%f",n);
    }
}

int main(int argc, char** argv) {
    float n1, n2;
    char c;
    
    printf("Escreva dois valores decimais:");
    scanf("%f %f",&n1,&n2);
    printf("Insira o caracter da operação que deseja fazer: ");
    scanf(" %c",&c);                                           //mete-se espaço antes do %c para ler apenas o caracter dado
    
    conta(n1,n2,c);
    return 0;       
    
}

