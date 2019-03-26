/**
 * @file 
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra o menu main
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 6 de Dezembro de 2018, 12:07
 */

#include "Menu.h"

/**
 * Função onde se aloca as estruturas principais
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param len tamanho maximo do array
*/

int AlocaInicial(struct cliente** clientes,struct viagem** viagens,
        struct fatura **faturas,int* len)
{
    int res = 1;
    if(*len==0)
    *clientes = (struct cliente*) malloc(TAM_STR*sizeof(struct cliente));
    *viagens = (struct viagem*) malloc(TAM_STR*sizeof(struct viagem));
    *faturas = (struct fatura*) malloc(TAM_STR*sizeof(struct fatura));
    if(*clientes == NULL){
        printf("Erro ao alocar memoria\n");
        res=0;
    }
    if(*viagens == NULL){
        printf("Erro ao alocar memoria\n");
        res=0;
    }
    if(*faturas == NULL){
        printf("Erro ao alocar memoria\n");
        res=0;
    }
    else 
        *len = TAM_INICIAL;
    return res;
}



int main(int argc, char** argv) {
    struct cliente *clientes;
    struct fatura *faturas;
    struct viagem *viagens;
    int cont=0;
    int len=0;
    int NIF_p=0;
    if(AlocaInicial(&clientes,&viagens,&faturas,&len)){
        //printf("%d",len);
        menu(&clientes, &viagens, &faturas, &cont, &len, &NIF_p);
        free(clientes); 
        free(faturas);
        free(viagens);

    }
}





