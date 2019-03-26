/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 13 de Outubro de 2018, 22:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int peso;
    float altura, IMC;
    printf("insira o seu peso em kg:");
    scanf("%d", &peso); 
    printf("insira a sua altura em m:");
    scanf("%f", &altura);
    IMC = peso / (altura * altura);
    printf("O seu IMC é de %.2f \n", IMC);
    
    return (EXIT_SUCCESS);
}

