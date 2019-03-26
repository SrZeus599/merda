/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 27 de Outubro de 2018, 16:07
 */

#include <stdio.h>
#include <stdlib.h>
#define tam 5
/*
 * 
 */
int main(int argc, char** argv) {
    
    int arr[10], i, temp;
    printf("Escreva os elementos dum array de 5 numeros inteiros \n");
    for(i=0; i<5; ++i){
          printf("Elemento %i: ",i+1);
          scanf("%i", &arr[i]);
          
    }     
    for(i= 0; i<tam/2; ++i){
        int temp = arr[i];
        arr[i] = arr[tam-i-1];
        arr[tam-i-1] = temp;        
}
    for(i=0; i<5; ++i)
    printf("%d  ",arr[i]);
}

   // printf("O seu array rodado é: %i %i %i %i %i \n",arr[4],arr[3],arr[2],arr[1],arr[0]);
   // return 0;


