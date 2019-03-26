/**
 * @file Gestao_faturas.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra a gestão de faturas
 */
#include "Gestao_faturas.h"

/**
 * Funçoes onde está inserido todas as pesquisas feitas
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param cont contador
 * @param NIF_f mes
*/

int Pesquisa_3(struct viagem *viagens,struct cliente *clientes,int NIF_f,int cont){
    
    int i=0;
    while(i < cont && viagens[i].clientes.NIF != NIF_f)
        i++;
    if(i == cont)
        return -1;
    else 
        return i;
}

int Pesquisa_mes(struct fatura *faturas,int mes,int cont){
    
    int i=0;
    while(i < cont && faturas[i].viagens.mes_v != mes)
        i++;
    if(i == cont)
        return -1;
    else
        return i;
}

struct fatura *get_f_mes(struct fatura *faturas,int mes,int cont){
    
    int pos = Pesquisa_mes(faturas,mes,cont);
    
    if(pos == -1)
        return NULL;
    else
        return &faturas[pos];
}

/**
 * Funçoes onde se irá inserir as variaveis da fatura depois de 
 * descoberto o cliente que fez as viagens
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_f Nif do cliente que ira ser usado 
*/

void leFatura(struct fatura **faturas,struct viagem **viagens,
        struct cliente **clientes,int NIF_f,int pos,int cont)
{
    int mes,data,variavel_1;
    int divisao_1=1000000;
    int divisao_2=100;
    int i;
    
    struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
    preencheMatriz((struct lanco*) matriz, "Distancias.txt", true);
    preencheMatriz((struct lanco*) matriz, "Precos.txt", false);
    
    faturas[pos]->viagens.clientes.NIF=viagens[pos]->clientes.NIF;
    faturas[pos]->viagens.mes_v=viagens[pos]->mes_v;
    faturas[pos]->viagens.p1=viagens[pos]->p1;
    faturas[pos]->viagens.p2=viagens[pos]->p2;
    //Passar o mes e o NIF para usar na fatura
    
    readInt(&mes,01,12,
    "Em que mes deseja gerar fatura das viagens do cliente(01-12)");
    
    data=viagens[pos]->data;   
    variavel_1 = viagens[pos]->data / divisao_1;
    mes = variavel_1 % divisao_2;
    struct fatura *fat= get_f_mes(*faturas,mes,cont);  

    if(fat != NULL)
    {
        for (pos=0; pos<MAX; pos++) {
        faturas[pos]->total=matriz[faturas[pos]->viagens.p1]
                [faturas[pos]->viagens.p2].preco;
        faturas[pos]->distancia=matriz[faturas[pos]->viagens.p1]
                [faturas[pos]->viagens.p2].dist;
        printf("NIF do cliente: %d\n",fat->viagens.clientes.NIF);
        printf("Portagem(ns) de entrada: %d\n",fat->viagens.p1);
        printf("Portagem(ns) de saida: %d\n",fat->viagens.p2);
        printf("A data da(s) passagem(ns)(AAMMDDHHMM): %d\n",fat->viagens.data);
        printf("A distancia percorrida foi de: %d\n",fat->distancia);
        printf("O valor total a pagar e de %d\n",fat->total);
        }
    }else
        printf("Nao existe registo de viagens desse cliente no mes insrirdo");
    

}

/**
 * Funçoes onde se gera a fatura
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param cont contador
 * @param len tamanho maximo do array
*/

void gerar_fatura(struct fatura **faturas,struct viagem **viagens,
        struct cliente **clientes,int *cont,int *len)
{
    int NIF_f,pos;

    
    readInt(&NIF_f,100000000,999999999,"Digite o NIF do cliente que pretende gerar fatura");
    pos=Pesquisa_3(*viagens,*clientes,NIF_f,*cont); 
    if(pos != -1){
       leFatura(faturas,viagens,clientes,NIF_f,pos,cont);        
    }
    else
        printf("Nao existem registos de viagem do NIF inserido");
}

/**
 * Funçoes onde está inserido a gestão de faturas
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param cont contador
 * @param len tamanho maximo do array
*/

void Gestaodefaturas(struct fatura **faturas,struct viagem **viagens,
        struct cliente **clientes,int *cont,int *len)
{
    int escolha_f_1;
    do{
        printf("1-Gerar fatura\n");
        printf("0-Voltar para o menu principal\n");        
        readInt(&escolha_f_1,0,1,"");

        switch(escolha_f_1)
        {
            case 1:gerar_fatura(faturas,viagens,clientes,cont,len);
            break;
            case 0:printf("MENU\n");
            break;
        }
    } while (escolha_f_1 != 0);
    
}