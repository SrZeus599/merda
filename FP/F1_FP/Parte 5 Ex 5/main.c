/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 13 de Outubro de 2018, 22:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float p,r,a,d,pi;
   
    printf("Insira o diâmetro em cm:");
    scanf("%f", &d);    
    pi = 3.14;
    r = d / 2;
    p = 2 * pi * r;
    a = pi * r * r;
    printf("A área é de %.2f cm",a);
    printf(" e o perímetro é de %.2f cm \n",p);

    return (EXIT_SUCCESS);
}

