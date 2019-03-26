/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 13 de Outubro de 2018, 19:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int dividendo, divisor;
    printf("insira dois numeros inteiros:\n");
    scanf("%d %d", &dividendo, &divisor);
    float quociente;
    float resto;
    float b = (float)dividendo;
    quociente = b / divisor;
    resto = fmod(dividendo,divisor);
    printf("O quoficiente da divisão é %.3f\n",quociente);
    printf("O resto da divisão é %.3f\n",resto);
    
    return 0;
}

