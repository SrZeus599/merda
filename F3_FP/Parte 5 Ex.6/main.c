/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 5 de Novembro de 2018, 12:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int getPreco(int num_fatura,int N){
    struct fatura fat[N];
    printf("%f",N.preco);
    if (num_fatura=2 && N<2)
            return N.preco;
    else 
        return N.preco;
}


int maisCaro(struct produto X, struct produto Y){
    if (X.preco>Y.preco)
        return X.codigo;
    else
        if(Y.preco>X.preco)
            return Y.codigo;
        else
            return 0;
}    


int main(int argc, char** argv) 
{ 
    struct produto pro[MAX_PRODS]={{1,10,"Massa"},{2,5,"Arroz"}};
    int cod,pre;

    struct fatura faturas[3] = {
        {1, 123456, 2, "Joao Costa", {"Rua da ponte","Braga", 12, 483, 3},
            {{23, 34.2,"Vaso Magnolia"},
              {304, 12.6,"Salmão posta"}}},
        {2, 625894, 1, "Clara Soraia", {"Av.Central","Porto",3, 45, 0},
            {{55, 12.6, "Colhogar"}}},
        {3, 487953, 3, "Maria Costa", {"Beco sem fim", "Porto", 1, 20, 2},
            {{55, 12.6, "Colhogar"},
             {123, 0.50, "Lapis preto"},
             {998, 42.3, "Royal Canin"}}}
    };
    
    float total = faturas[0].produtos[0].preco + faturas[0].produtos[1].preco;
    char iniciais[2] = {faturas[2].nome_cliente[0], faturas[2].nome_cliente[6]};
    int i;

    cod=maisCaro(pro[0],pro[1]);
    printf("%d",cod);
    pre=getPreco(fatura 2,2);
    printf("%f",pre);
}






