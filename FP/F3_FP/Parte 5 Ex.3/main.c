/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 30 de Outubro de 2018, 19:41
 */

#include <stdio.h>
#include <stdlib.h>

void maior(int x,int y,int z){
    int array[3] = {x,y,z};
    if (array[0] >= array[1] && array[0] >= array[2])
        printf("\nO maior elemento é: %d",array[0]);
    else if (array[1] >= array[0] && array[1] >= array[2])
        printf("\nO maior elemento é: %d",array[1]);
    else
        printf("\nO maior elemento é: %d",array[2]);
}
 
 
int main(int argc, char** argv) {
    int n1,n2,n3,i;
    
    printf("Escreva um array de 3 elementos inteiros:");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("O seu array é: ");
    
    for (i = 0; i < 3; i++){
        int array[3] = {n1,n2,n3};
        printf("%d   ", array[i]);      
    }
    maior(n1,n2,n3);
    printf("\n");
     
   /* if(n1>n2 && n1>n3)
        printf("O maior valor do array é %d",n1);
    if(n2>n1 && n2>n3)
       printf("O maior valor do array é %d",n2);
    if(n3>n1 && n3>n2)
        printf("O maior valor do array é %d",n3);
    if(n3==n1 && n3==n2)
        printf("O maior valor do array é %d",n1);
    if(n3==n1 && n3>n2)
        printf("O maior valor do array é %d",n3);
    if(n2==n1 && n2>n3)
        printf("O maior valor do array é %d",n2);
    if(n2==n3 && n2>n1)
        printf("O maior valor do array é %d",n2);
    
 */    printf("\n");

    return (0);
}

