/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Paulo
 *
 * Created on 28 de Dezembro de 2018, 15:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int tam=21;
    int NIB_p[tam];
    *NIB_p =(int*) malloc(tam * sizeof(int));   
    
    for (int i = 0; i < 21; i++) { 
        // %1d reads a single digit 
        scanf("%1d", &NIB_p[i]); 
    } 
    
    printf("\n Os valores do array sao:\n");
    for(int i=0;i<tam;i++)
        printf("%d\t",NIB_p[i]);

    free(NIB_p);
    

}

