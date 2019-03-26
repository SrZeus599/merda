/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 9 de Novembro de 2018, 15:10
 */

#include <stdio.h>
#include <stdlib.h>

int Maioresque5(int n1,int n2, int n3){
    int cont = 0;
    if (n1>5)
        cont++;
    if (n2>5)
        cont++;
    if (n3>5)
        cont++;
    return cont;          
}
int main(int argc, char** argv) {
    int cont = 0;
    int num1=3,num2=4,num3=5;
    cont= Maioresque5(num1,num2,num3);
    printf("value of a is %d\n",cont);  
    
    
    
    

    
}

