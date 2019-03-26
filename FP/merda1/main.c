/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 28 de Dezembro de 2018, 11:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int tam=21;
    int NIB_p;
    NIB_p =(int) malloc(tam * sizeof(int));
    
    int i;
    for(i=0;i < tam;i++)
        scanf("%d",&NIB_p[i]);

    printf("\n Os valores do array sao:\n");
    for(i=0;i<tam;i++)
        printf("%d\t",NIB_p[i]);

    free(NIB_p);
}

