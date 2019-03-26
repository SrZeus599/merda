/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 29 de Outubro de 2018, 15:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void xpto(char arr[], int tam, int pos, int qtd){
    if((tam>0)&&(pos>0)&&(qtd>0)&&(tam>pos)&&(tam>qtd)) {
    
    printf("%c\n",arr[pos]);
    
    for(int i=0;i<qtd;i++){
        if(pos-i-1>=0)
            printf("ant  %c\n",arr[pos-i-1]);
        if(pos+i+1<tam)
            printf("suc %c\n",arr[pos+i+1]);
    }
        
    }
        else{ 
            printf("erro !!!");
                
        }
    }
    

   


