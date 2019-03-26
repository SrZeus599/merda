/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 19 de Novembro de 2018, 21:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    int contador = 0;
    int altura = 120;
    int idade_joao, idade_maria = 20;
    float peso=12.34;
    char genero_joao="F";
    idade_joao = idade_maria + 5;
    contador=   contador + 1;
    peso = peso* 10;
    
    int x = idade_joao++;
    int y = ++idade_joao;
    
    int soma= x + y;
    
    float res_float = 10 + altura * 1.5;
    
    printf(" o joao %c tem %d anos e pesa %f kg.\nA Maria tem %d anos de idade.", genero_joao, idade_joao, peso, idade_maria);
    
    return (0);
    
 
}
