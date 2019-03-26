/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 23 de Outubro de 2018, 10:45
 */

#include <stdio.h>
#include <stdlib.h>

void iana (float n1, float n2, char modalidade){
    switch(modalidade){
        case 'c': 
            if(n1 >= 8 && n2 >= 8 && (n1 + n2) / 2 >= 9.5)
            printf("passou");
            else printf("Reprovou");
        case 'b': 
            if(n1 >= 8 && ((0.4 * n1)+(0.6 * n2))>= 9.5)
                printf("passou");
            else printf("Reprovou");
        case 'm': 
            if(n1 || n2 >= 9.5 && (n1 + n2) / 2 >=9.5)
            printf("passou");
            else printf("Reprovou");
            break;
    }
    int main(){
        float n1 = 8.5, n2 = 12;
        return 0;
    }
}

