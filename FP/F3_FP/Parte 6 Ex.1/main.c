/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 8 de Novembro de 2018, 12:59
 */

#include <stdio.h>
#include <stdlib.h>

void calculoMediaESoma(float n1, float n2, float n3){
    float soma = n1 + n2 + n3;
    float media = soma/3;
    
    printf("A soma é %f\n",soma);
    printf("A media é %f\n",media);
}
int main(int argc, char** argv) {
    float num1,num2,num3;
    printf("Insira tres numeros:");
    scanf("%f %f %f",&num1, &num2, &num3);
    calculoMediaESoma(num1,num2,num3);

    
}

