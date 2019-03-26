/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 17 de Outubro de 2018, 16:04
 */

#define MAX_STR 50
#define MAX_PRODS 20

struct autor{
    char nome[MAX_STR +1];
    int ano_nasc;
    long livros;
};
struct livro{
    long isbn;
    int ano, requisitante, total_unidades, quantidade_total, quantidade_stock;
    char titulo[MAX_STR +1];
    struct autor autores[5];
};
struct requisicao{
    int alunos_requisitantes;
    struct livro livros;
};

int main(int argc, char** argv) 
{
    int matriz2[3][3] = {{5,5,5},{6,6,6},{7,7,7}}; 
    printf("%n",matriz2[3][3]);

    return 0;
}

