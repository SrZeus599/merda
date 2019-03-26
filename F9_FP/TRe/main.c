/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 17 de Dezembro de 2018, 14:35
 */

#include <stdio.h>
#include <stdlib.h>

enum Genero {
    H, M
};

/*
struct Notas{
    int num_aluno;
    float FP, LP;
    char nome[50];
    enum Genero gen;
};
 */

int ProcuraSequencialOrdenada(int pseq[], unsigned int pfim, unsigned int pval) {
    unsigned int IndActual = 0;
    int res = -1;
    int encontrado = 0;

    while (encontrado == 0 && IndActual <= pfim) {
        if (pseq >= pval) {
            encontrado = 1;
        } else {
            IndActual++;
        }
    }
    if (IndActual <= pfim && pseq == pval) {
        res = IndActual;
    }
}

int main(int argc, char** argv) {
    int aluno[] = {1,2,3,4};
    int nome[] = {1,2,3,4};
    printf("%d", ProcuraSequencialOrdenada(aluno, 4, 3));

}

