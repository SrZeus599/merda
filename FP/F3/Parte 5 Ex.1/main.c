/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 30 de Outubro de 2018, 15:27
 */

#include <stdio.h>
#include <stdlib.h>


//void nota (float n1, float n2, char modalidade){
//    switch(modalidade){
 //       case 'c': 
 //           if(n1 >= 8 && n2 >= 8 && (n1 + n2) / 2 >= 9.5)
 //           printf("passou");
 //           else printf("Reprovou");
 //           
 //   }
//}
 

int main(int argc, char** argv) {
    float n1, n2;
    printf("Insira a nota 1:");
    scanf("%f", &n1);
    printf("Insira a nota 2:");
    scanf("%f", &n2);   
    if(n1 >= 8 && n2 >= 8 && (n1 + n2) / 2 >= 9.5 && n1<20 && n2<20 && n1>0 && n2>0)
            printf("Passou com nota final %f",(n1 + n2) / 2);
            else if (n1>20 || n2>20 || n1<0 ||n2<0)
                printf("-1\n");
            else printf("Reprovou\n");  
}

