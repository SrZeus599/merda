
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 13 de Outubro de 2018, 21:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    srand ( time(NULL) );
    int n1,n2;
    printf("insira dois numeros inteiros:");
    scanf("%d %d", &n1, &n2);
    int nr1, nr2;
    nr1 = rand() % 100;
    nr2 = rand() % 100;
    printf("Seus novos numeros são %d", nr1);
    printf(" e %d\n", nr2);
    
    return (EXIT_SUCCESS);
}

