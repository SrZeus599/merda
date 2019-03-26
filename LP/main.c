/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 22 de Novembro de 2018, 10:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void teste() {
    printf("bla bla\n");
}

float dobroDaRaizQ(int arg) {
    teste();
    return 2*sqrt(arg);
}

int main(int argc, char** argv) {

    int x = 0;
    
    printf("Valor de x:%d\n")
    printf("%f\n",dobroDaRaizQ(4));
    x++;
    printf("Novo valor de x:%d\n",x);
    return (EXIT_SUCCESS);
}

