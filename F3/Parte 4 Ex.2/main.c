/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 30 de Outubro de 2018, 0:13
 */

#include <stdio.h>
#include <stdlib.h>

struct vendas
{
     int quantidade_vtotal;
     float total_vendido;
       
};

float quantidade_vtotal(int qv1,int qv2,int qv3, int qv4)
{
   float quantidade_vtotal= qv1+ qv2+ qv3+ qv4;
}

float total_vendido(int p1_v,int p2_v,int p3_v, int p4_v)
{
    float total_vendido = p1_v + p2_v + p3_v + p4_v;
}

struct refeicoes
{
    enum tipo_ref{carne, peixe,vegetariano,dieta};
    float precos;
    enum data;
    enum refeicao{almoco,jantar};
};

float balanco_conta (int custo, float saldo)
{
    if (custo >= 0)
        saldo = saldo - custo;
    return saldo;
};
float depositar(int custo, float dinheiro)
{
    float saldo;
    float deposito;
    if (custo >= 0)
    {
        printf ("Insira a quantidado do deposito");
        scanf ("%f", &deposito);
        saldo = saldo + deposito;  
    }
    return saldo;
}


int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

