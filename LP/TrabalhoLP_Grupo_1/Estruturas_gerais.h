/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estruturas_gerais.h
 * Author: Paulo
 *
 * Created on 12 de Dezembro de 2018, 10:53
 */

#ifndef ESTRUTURAS_GERAIS_H
#define ESTRUTURAS_GERAIS_H
#define MAX_CARAC 40
#define MAX 21
#define TAM_INICIAL 3
#define TAM_INCREMENTO 3
#define TAM_DECREMENTO 3
#define TAM_STR 20
#include <stdio.h>
#include <stdlib.h>
#include "API_Leitura.h"
#include "API_Utils.h"
#include "Utils.h"


struct veiculo{
    char matricula[MAX];
    char modelo[MAX];
    char marca[MAX];
};

struct cliente{
    char nome[MAX_CARAC];
    int NIF;
    int CC;
    int NIB[MAX];
    char morada[MAX_CARAC];
    int n_pontos_vv;
    struct veiculo veiculos;
};

struct viagem{
    int data;
    int mes_v;
    int p1;
    int p2;
    struct cliente clientes;
};

struct fatura{
    int total;
    int distancia;
    struct viagem viagens;
};


#ifdef __cplusplus
extern "C" {
#endif

    


#ifdef __cplusplus
}
#endif

#endif /* ESTRUTURAS_GERAIS_H */

