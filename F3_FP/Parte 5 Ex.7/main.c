/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 5 de Novembro de 2018, 12:02
 */

#include <stdio.h>
#include <stdlib.h>

int grand(int vc,int vt,int posicao){
    if (vc>=2 && vt>0)
        if(vc <= vt * 0.75)
            return 0;
        else
            return 1;
    else
        return -1;
    
}
int main(int argc, char** argv) {
    int i,vtp,vcp,pp;
    
    printf("Quantas voltas tem o grand prix");
    scanf("%d",&vtp);
    if (vtp>0){
    printf("Quantas voltas o pilotou completou");
    scanf("%d",&vcp);
    printf("Qual a posição do piloto");
    scanf("%d",&pp);
    
    int posicao[11] = {25,18,15,12,10,8,6,4,2,1};

    i=grand(vcp,vtp,pp);
    
    switch (i){
        case -1:printf ("Invalido");
                break;
        case 0: printf("%d",posicao[pp-1]/2);
                break;
        case 1: printf("%d",posicao[pp-1]);
                break;
    }
    }
    else
        printf ("N de voltas invalido");
   
}
   
    


