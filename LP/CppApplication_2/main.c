/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 22 de Novembro de 2018, 11:22
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../API_LEITURA/API_Leitura.h"
#include "../../API_LEITURA/API_Utils.h"
#define TAM_STR 20
#define TAM_INICIAL 3
#define TAM_INCREMENTO 3
#define TAM_DECREMENTO 3

struct Nota{
    char nome_UC[TAM_STR];
    int nota;
};
struct Aluno{
    char nome[TAM_STR];
    int id;
    char util[TAM_STR];
    char pass[TAM_STR];
    int num_notas;
    struct Nota notas[10];
};


int alocaInicial(struct Aluno** alunos, int* tam_max){
    int res = 1;
    *alunos = (struct Aluno*) malloc(TAM_INICIAL*sizeof(struct Aluno));
    
    if (*alunos == NULL){
        printf("Erro ao alocar memoria\n");
        res=0;
    }
    else 
        *tam_max = TAM_INICIAL;
    return res;
}


void leAluno(struct Aluno *alunos, int *pos, int id){
    alunos[*pos].id = id;
    readString(alunos[*pos].nome, (TAM_STR - 1), "Nome: ");
    readString(alunos[*pos].util, (TAM_STR - 1), "Nome util.: ");
    readString(alunos[*pos].pass, (TAM_STR - 1), "Pass: ");
    alunos[*pos].num_notas = 0;
    (*pos)++;
}

int pesquisa(struct Aluno* alunos, int quantos, int id){
    int i = 0;
    while (i < quantos && alunos[i].id != id)
        i++;
    if (i == quantos)
        return -1;
    else 
        return i;
}

struct Aluno* getAluno(struct Aluno *alunos,int quantos, int id)
{
    int pos = pesquisa(alunos,quantos,id);
    
    if(pos = -1)
        return NULL;
    else
        return &alunos[pos];
}

void adicionaAluno(struct Aluno **alunos, int *quantos, int *tam_max){
    struct Aluno *novo;
    int id,pos;
    readInt(&id, 0, 9999, "Digite o ID do aluno");
    pos = pesquisa(*alunos, *quantos, id);
    
    if(pos == -1){
        if(*quantos == *tam_max){
            novo = realloc(*alunos,
                    ((*quantos)+TAM_INCREMENTO)*sizeof(struct Aluno));
            if (novo == NULL)
                printf("Realocacao de memoria falhou, aluno nao adicionado.\n");
            else
            {
                printf("Realocou memoria. Novo tamanho : %d bytes",
                        ((*quantos)+TAM_INCREMENTO) * sizeof(struct Aluno));
                *alunos = novo;
                (*tam_max) += TAM_INCREMENTO;
                leAluno(*alunos, quantos, id);
            }
        }else{
            leAluno(*alunos, quantos, id);
        }
    }
    else printf("Identificador ja existe.\n");
}

void atualizaAluno(struct Aluno *alunos, int quantos,int id){
    struct Aluno *aluno = getAluno(alunos,quantos,id);
    
    if(aluno != NULL)
    {
        readString(aluno->nome,(TAM_STR -1),"Nome: ");
        readString(aluno->util,(TAM_STR -1),"Nome Util.: ");
        readString(aluno->pass,(TAM_STR -1),"Pass: ");
    }
}

void removeAluno(struct Aluno **alunos, int *quantos, int*tam_max, int id){
    struct Aluno *novo;
    int pos;
    pos = pesquisa(*alunos, *quantos, id);
    
    if(pos> -1){
        while(pos< (*quantos) - 1){
            (*alunos)[pos] = (*alunos)[pos+1];
            pos++;
        }
        (*quantos)--;
        printf("Aluno removido\n");
        
        if (*tam_max - *quantos >= TAM_DECREMENTO)
        {
            novo = realloc(*alunos,
                    ((*tam_max) * sizeof(struct Aluno)) -
                    TAM_DECREMENTO*sizeof(struct Aluno));
            if (novo == NULL)
                printf("Realocacao de memoria falhou\n");
            else{
                printf("Realocou memoria.Novo tamanho: %d bytes\n",
                        ((*tam_max) * sizeof(struct Aluno)) - 
                        TAM_DECREMENTO*sizeof(struct Aluno));
                *alunos = novo;
                (*tam_max) -= TAM_DECREMENTO;
            }
        }
    }
    else
        printf("Aluno com id %d nao existe\n",id);
}


int main(int argc, char** argv) {
    struct Aluno *alunos;
    int quantos=0;
    int tam_max=0;
    
    int id=0;
    int pos=0;
    alocaInicial(&alunos,&tam_max);
    adicionaAluno(&alunos,&quantos,&tam_max);
    pesquisa(&alunos,&quantos,&id);

    

    leAluno(&alunos,&pos,&id);
    

    if(alocaInicial(&alunos, &tam_max)){
        printf("%d",tam_max);
        
        free(alunos);

    }
}

