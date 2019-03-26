/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 22 de Outubro de 2018, 10:23
 */

#include <stdio.h>
#include <stdlib.h>

enum classev {C1,C2,C3,C4};
enum tipop {V, N};
enum formap {C,D};

struct portagem{
    int data, hora, matricula;
    float valor_pago;       
};
struct portagens{
    int data;
    struct portagem p_totais[100];
};
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

