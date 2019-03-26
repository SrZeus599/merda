/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 23 de Outubro de 2018, 10:16
 */

#include <stdio.h>
#include <stdlib.h>


struct turma{
    int n_alunos;
    char nome_aluno;
    float notas;
};
float media(float n1,float n2,float nf){
    return (n1 + n2) /2;
}
float mediana(float notas[],int n){
    int j;
    int i;
    int temp;
    for (i=0;i<n;i++){
        for(j=i+1;j<n;i++){
              if (notas[i]>notas[j]){
                  temp = notas[i];            //ordenar dos elementos
                  notas[i] = notas[j];
                  notas[j] = temp;                                         
              }
        }
    }
    
    notas[n/2]                           //É necessário ordenar os numeros (se notas[n]>notas[n+1]
    ou                                     //entao troca-los x[n] = x[n +1]. A mediana pode ter dois tipos
    notas[n/2] + notas[(n/2)-1]          //1 valor se o n for impar ou 2 valores se o n for par.
                                                          
}
int main(int argc, char** argv) {
  
    return (EXIT_SUCCESS);
}

