/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 10 de Novembro de 2018, 19:13
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 50
#define MAX_PRODS 20

struct produto{
    int codigo;
    float preco;
    char descricao[MAX_STR + 1];
};

struct morada{
    char rua[MAX_STR + 1], cidade[MAX_STR];
    int porte, numero, piso;
};

struct fatura{
    int num_fatura, nif, nprodutos;
    char nome_cliente[MAX_STR + 1];
    struct morada endereco;
    struct produto produtos[MAX_PRODS];
};

void produtomaiscaro(struct produto array[], int tamanho){
    int valor,indice;
    valor=array[0].preco;
    for(int i=1;i<tamanho;i++){
        if(array[i].preco>valor)
            indice=i;
            valor=array[i].preco;
    }
    for (int i=0;i<tamanho;i++)
        if(valor==array[i].preco)
            printf("%d\n",array[i].codigo);
    }
/*
void maiscaro(struct fatura array[], int tamanho){
    int caract,indice;
    caract=strlen(array[0].nome_cliente);
    for (int i=0;i<tamanho;i++){
        if(strlen(array[i].nome_cliente>caract))      para o exercicio b)
            caract=strlen(array[i].nome_cliente);     
    }

    for (int i=0;i<tamanho;i++)
        if(valor==array[i].preco)
            printf("%d\n",array[i].codigo);
*/
}




int main(int argc, char** argv) 
{ 
    struct fatura faturas[3] = {
        {1, 123456, 2, "Joao Costa", {"Rua da ponte","Braga", 12, 483, 3},
            {{23, 34.2,"Vaso Magnolia"},
              {304, 12.6,"Salmão posta"}}},
        {45, 625894, 1, "Clara Soraia", {"Av.Central","Porto",3, 45, 0},
            {{55, 12.6, "Colhogar"}}},
        {995, 487953, 3, "Maria Costa", {"Beco sem fim", "Porto", 1, 20, 2},
            {{55, 12.6, "Colhogar"},
             {123, 0.50, "Lapis preto"},
             {998, 42.3, "Royal Canin"}}}
    };
    int i;
    float total = faturas[0].produtos[0].preco + faturas[0].produtos[1].preco;
    char iniciais[2] = {faturas[2].nome_cliente[0], faturas[2].nome_cliente[6]};
    char pi1[MAX_STR+1];
    printf("Inssira o nome do produto");
    scanf("%s",&pi1);
    produtomaiscaro(pi1,3);
    
    
}

