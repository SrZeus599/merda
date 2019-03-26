/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 29 de Outubro de 2018, 14:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void xpto(char arr[], int tam, int qtd, int pos){
    
    if((tam>0)&&(pos>0)&&(qtd>0)&&(tam>pos)&&(tam>qtd)){
        
        printf("%c\n", arr[pos]);
        for(int i=0; i<qtd; i++){
            if(pos-i-1>=0)
                printf("ant-%c\n", arr[pos-i-1]);
            if(pos+i+1<tam)
                printf("sec-%c\n", arr[pos+i+1]);
        }        
    }    
}

int main(int argc, char** argv) {
    char a[10]={'a','s','d','f','g','h','i','j','k','l'};
    xpto(a,10,3,2);
    return (EXIT_SUCCESS);
}
