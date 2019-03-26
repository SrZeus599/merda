/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 27 de Outubro de 2018, 11:03
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int arr[10], i;
    printf("Escreva os elementos dum array de 4 numeros inteiros \n");
    for(i=0; i<4; ++i){
          printf("Elemento %i: ",i+1);
          scanf("%i", &arr[i]);
     }
    printf("O seu array rodado é: %i %i %i %i \n",arr[3],arr[1],arr[2],arr[0]);
    return 0;
}

