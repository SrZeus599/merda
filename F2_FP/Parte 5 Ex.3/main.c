/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 21 de Outubro de 2018, 19:57
 */
#include <stdio.h>
#include <stdlib.h>


enum precos {P1, P2, P3};
enum idade {i, n, s};
enum total_vendido {TV1, TV2, TV3};

struct total{
    float TV1, TV2, TV3;
     
};
struct fatura{
    struct total TV1, TV2, TV3;
    enum precos P1, P2, P3;
    enum idade i, n, s;
    int sala_c[6], sessao[5];
    char filme[50];
    
};

int main(int argc, char** argv) {
  
    const float P1 = 3.5;
    const float P2 = 5;
    const float P3= 4;
    char i = (float)P1;
    char n = (float)P2;
    char s = (float)P3;
    int lotacao = 100;
    float TV1 = P1 * lotacao;
    float TV2 = P2 * lotacao;
    float TV3 = P3 * lotacao; 
    
    
}


