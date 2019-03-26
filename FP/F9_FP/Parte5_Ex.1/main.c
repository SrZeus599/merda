/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 12 de Dezembro de 2018, 14:39
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_STR 20
#define TAM_INICIAL 3
#define TAM_INCREMENTO 3
#define TAM_DECREMENTO 3


struct Nota {
    char nome_UC[TAM_STR];
    int nota;
};

struct Aluno {
    char nome[TAM_STR];
    int id;
    char util[TAM_STR];
    char pass[TAM_STR];
    int num_notas;
    struct Nota notas[10];
};

int main(int argc, char** argv) {
    struct Aluno *alunos;
    int quantos = 0;
    int tam_max = 0;
    return (EXIT_SUCCESS);

}

