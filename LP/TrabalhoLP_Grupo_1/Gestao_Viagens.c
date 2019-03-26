/**
 * @file Gestao_viagens.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra a gestão de viagens
 */
#include "Gestao_viagens.h"

/**
 * Funçoes onde está inserido todas as pesquisas feitas
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param cont contador
 * @param data p1 p2 matricula
*/

int Pesquisa_2(struct cliente *clientes,int NIF_s_v, int cont)
{
    int i=0;
    while(i < cont && clientes[i].NIF != NIF_s_v)
        i++;
    if(i == cont)
        return -1;
    else 
        return i;
}
int Pesquisa_data(struct viagem *viagens,int data, int cont)
{
    int i=0;
    while(i < cont && viagens[i].data != data)
        i++;
    if(i == cont)
        return -1;
    else
        return i;
}

int Pesquisa_p1(struct viagem *viagens,int p1, int cont)
{
    int i=0;
    while(i < cont && viagens[i].p1 != p1)
        i++;
    if(i == cont)
        return -1;
    else
        return i;
}

int Pesquisa_p2(struct viagem *viagens,int p2, int cont)
{
    int i=0;
    while(i < cont && viagens[i].p2 != p2)
        i++;
    if(i == cont)
        return -1;
    else
        return i;
}

int Pesquisa_matricula(struct viagem *viagens,char *matricula,int cont)
{
    unsigned int i=0;
    int res=-1;
    int encontrado=0;
    
    while(encontrado == 0 && i<=cont){
        if(strcmp(viagens[i].clientes.veiculos.matricula, matricula) ==0){
            res=i;
            encontrado=1;
        }else{
            i++;
        }
    }
    return res;
}

/**
 * Funçao onde se insere as variaveis das viagens depois de detetado o cliente
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param pos posiçao do array de cliente
 * @param NIF_s_v Nif do cliente que ira ser usado
*/

void leViagem(struct viagem **viagens,struct cliente **clientes,
        int nif_a_v,int pos)
{
    int data,i,j,p1,p2,variavel_v_1,mes_v;
    int divisao_v_1=1000000;
    int divisao_v_2=100;
    struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
    preencheMatriz((struct lanco*) matriz, "Distancias.txt", true);
    preencheMatriz((struct lanco*) matriz, "Precos.txt", false);
   
    memset(viagens[pos]->clientes.veiculos.matricula, '0',  
            sizeof(viagens[pos]->clientes.veiculos.matricula));
    strcpy(viagens[pos]->clientes.veiculos.matricula,
            clientes[pos]->veiculos.matricula);
    //copia da matricula dos clientes para as viagens
    viagens[pos]->clientes.NIF=clientes[pos]->NIF;
    //copia do NIF dos clientes para as viagens
    
    readInt(&data,1000000000,1912312359,"Insira a data (AAMMDDHHMM)");
    
    viagens[pos]->data=data;
    variavel_v_1=viagens[pos]->data / divisao_v_1;
    mes_v = variavel_v_1 % divisao_v_2;
    viagens[pos]->mes_v=mes_v;   
    //obter o mes para usar na fatura
    
    readInt(&p1,0,4,"Insira a primeira portagem que passou: \n");
    readInt(&p2,0,4,"Insira a segunda portagem que passou: \n");
    viagens[pos]->p1=p1;
    viagens[pos]->p2=p2;
    if(p1 != p2)
    {
        printf("o valor a pagar e %0.1f euros, pelo que percorreu uma "
                "distancia de %0.1f km\n",matriz[p1][p2].preco,
                matriz[p1][p2].dist);
    }
    else printf("As portagens nao podem ser as mesmas!\n");    
}

/**
 * Funçao onde se insere as portagens
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param cont contador

*/

void inserir_portagens(struct viagem **viagens,struct cliente **clientes,
        int *cont)
{
    int nif_a_v,pos;
    
    readInt(&nif_a_v,100000000,999999999,"Digite o NIF do cliente\n");
    pos=Pesquisa_2(*clientes,nif_a_v,*cont);  
    
    if(pos != -1){
       leViagem(viagens,clientes,nif_a_v,pos);          
    }
    else
        printf("Nao existem registos de viagem do NIF inserido");
}

void Adicionar_viagem(struct viagem **viagens,
        struct cliente **clientes,int *cont)
{
    int escolha_v_2;
    do{
    printf("1-Inserir dados e portagens\n");
    printf("0-Sair\n");
    readInt(&escolha_v_2,0,1,"");
    switch(escolha_v_2){
        case 1:inserir_portagens(viagens,clientes,cont);
        break;
        case 0:printf("Voltou\n");
        break;
    }
    }while(escolha_v_2 != 0);
}

/**
 * Funçoes da pesquisa por data,p1,p2 e matricula
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param data p1 p2 matricula 

*/

struct viagem *get_v_data(struct viagem *viagens,int data, int cont)
{
    int pos = Pesquisa_data(viagens,data,cont);
    
    if(pos == -1)
        return NULL;
    else
        return &viagens[pos];
}

struct viagem *get_v_p1(struct viagem *viagens,int p1, int cont)
{
    int pos = Pesquisa_p1(viagens,p1,cont);
    
    if(pos == -1)
        return NULL;
    else
        return &viagens[pos];
}

struct viagem *get_v_p2(struct viagem *viagens,int p2, int cont)
{
    int pos = Pesquisa_p2(viagens,p2,cont);
    
    if(pos == -1)
        return NULL;
    else
        return &viagens[pos];
}

struct viagem *get_v_matricula(struct viagem *viagens,char matricula[],int cont)
{
    int pos = Pesquisa_matricula(viagens,matricula,cont);
    if(pos == -1)
        return NULL;
    else 
        return &viagens[pos];
}

/**
 * Funçoes onde estão inseridas todas as combinaçoes de busca de viagem
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param cont contador
*/

void opcao_1(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i;
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    
    if(via != NULL){
        printf("Data da passagem %d\n",via->data);
        printf("Portico de entrada %d\n",via->p1);
        printf("Portico de saida %d\n",via->p2);
        printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);    
    }
    else
        printf("Nao existem viagens na data inserida\n");
}

void opcao_2(struct cliente **clientes,struct viagem **viagens,int cont){
    int p1_i;
    readInt(&p1_i,0,4,
            "Insira a portagem de entrada que procura\n");
    struct viagem *via = get_v_p1(*viagens,p1_i,cont);
    
    if(via != NULL){
        printf("Portico de entrada %d\n",via->p1);
        printf("Data da passagem %d\n",via->data);
        printf("Portico de saida %d\n",via->p2);
        printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);    
    }
    else
        printf("Nao existem viagens na data inserida\n");
}

void opcao_3(struct cliente **clientes,struct viagem **viagens,int cont){
    int p2_i;
    readInt(&p2_i,0,4,
            "Insira a portagem de saida que procura\n");
    struct viagem *via = get_v_p2(*viagens,p2_i,cont);
    
    if(via != NULL){
        printf("Data da passagem %d\n",via->data);
        printf("Portico de entrada %d\n",via->p1);
        printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);    
    }
    else
        printf("Nao existem viagens na data inserida\n");
}

void opcao_4(struct cliente **clientes,struct viagem **viagens,int cont){
    char matricula_i[7];
    printf("Insira a matricula");
    gets(matricula_i);
    struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
    if(via != NULL){
        printf("Data da passagem %d\n",via->data);
        printf("Portico de entrada %d\n",via->p1);
        printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);
        printf("Portico de saida %d\n",via->p2);
    }
    else
        printf("Nao existem viagens com a matricula inserida\n");
}


void opcao_5(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p1_i;
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    
    if(via != NULL)
    {
        readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
        struct viagem *via = get_v_p1(*viagens,p1_i,cont);
        if(via != NULL)
        { 
            printf("Data %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Portico de saida %d\n",via->p2);
            printf("Matricula do veiculo %s\n",
                    via->clientes.veiculos.matricula);    
        }
    else
        printf("Nao existem viagens na portagem de entrada inserida");
}
    else
        printf("Nao existem viagens na data inserida");
}


void opcao_6(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p2_i;
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    
    if(via != NULL)
    {
        readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
        struct viagem *via = get_v_p1(*viagens,p2_i,cont);
        if(via != NULL)
        { 
            printf("Data %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Portico de saida %d\n",via->p2);
            printf("Matricula do veiculo %s\n",
                    via->clientes.veiculos.matricula);    
        }
    else
        printf("Nao existem viagens na portagem de saida inserida");
}
    else
        printf("Nao existem viagens na data inserida");
}


void opcao_7(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i;
    char matricula_i[17];
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    
    if(via != NULL)
    {
        printf("Insira a matricula");
        gets(matricula_i);
        struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
        if(via != NULL)
        {
            printf("Data da passagem %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);
            printf("Portico de saida %d\n",via->p2);
            
        }
        else printf("Nao existem viagens com a matricula inserida");
    }
    else printf("Nao existem viagens na data inserida\n");
}

void opcao_8(struct cliente **clientes,struct viagem **viagens,int cont){
    int p1_i,p2_i;
    readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
    struct viagem *via = get_v_p1(*viagens,p1_i,cont);
    if(via != NULL)
    {
        readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
        struct viagem *via = get_v_p2(*viagens,p2_i,cont);
        if(via != NULL)
        { 
            printf("Data %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Portico de saida %d\n",via->p2);
            printf("Matricula do veiculo %s\n",
                    via->clientes.veiculos.matricula);    
        }
        else printf("Nao existem viagens na portagem de saida inserida");
    }
    else printf("Nao existem viagens na portagem de entrada inserida");
}
    
       

void opcao_9(struct cliente **clientes,struct viagem **viagens,int cont){
    int p1_i;
    char matricula_i[7];
    readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
    struct viagem *via = get_v_p1(*viagens,p1_i,cont);
    if(via != NULL)
    {
        printf("Insira a matricula");
        gets(matricula_i);
        struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
        if(via != NULL)
        {
            printf("Data da passagem %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);
            printf("Portico de saida %d\n",via->p2);
            
        }
        else printf("Nao existem viagens com a matricula inserida");
    }
    else printf("Nao existem viagens com a portagem de entrada inserida\n");
}

void opcao_10(struct cliente **clientes,struct viagem **viagens,int cont){
    int p2_i;
    char matricula_i[7];
    readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
    struct viagem *via = get_v_p2(*viagens,p2_i,cont);
    if(via != NULL)
    {
        printf("Insira a matricula");
        gets(matricula_i);
        struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
        if(via != NULL)
        {
            printf("Data da passagem %d\n",via->data);
            printf("Portico de entrada %d\n",via->p1);
            printf("Matricula do veiculo %s\n",via->clientes.veiculos.matricula);
            printf("Portico de saida %d\n",via->p2);
            
        }
        else printf("Nao existem viagens com a matricula inserida");
    }
    else printf("Nao existem viagens com a portagem de saida inserida\n");
}


void opcao_11(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p1_i,p2_i;
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    
    if(via != NULL)
    {
        readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
        struct viagem *via = get_v_p1(*viagens,p1_i,cont);
        if(via != NULL)
        { 
            readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
            struct viagem *via = get_v_p2(*viagens,p2_i,cont);
            if(via != NULL)
            { 
                printf("Data %d\n",via->data);
                printf("Portico de entrada %d\n",via->p1);
                printf("Portico de saida %d\n",via->p2);
                printf("Matricula do veiculo %s\n",
                        via->clientes.veiculos.matricula);    
            }
        else printf("Nao existem viagens na portagem de saida inserida");
        }
        else printf("Nao existem viagens na portagem de entrada inserida");
    }
    else printf("Nao existem viagens na data inserida");
}


void opcao_12(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p1_i;
    char matricula_i[7];
    readInt(&data_i,1000000000,1912312359,
    "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    if(via != NULL)
    {
        readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
        struct viagem *via = get_v_p1(*viagens,p1_i,cont);
        if(via != NULL)
        {
            printf("Insira a matricula");
            gets(matricula_i);
            struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
            if(via != NULL)
            { 
                printf("Data %d\n",via->data);
                printf("Portico de entrada %d\n",via->p1);
                printf("Portico de saida %d\n",via->p2);
                printf("Matricula do veiculo %s\n",
                        via->clientes.veiculos.matricula);    
            }
        else printf("Nao existem viagens com a matricula inserida");
        }
        else printf("Nao existem viagens na portagem de entrada inserida");
    }
    else printf("Nao existem viagens na data inserida");
}


void opcao_13(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p2_i;
    char matricula_i[7];
    readInt(&data_i,1000000000,1912312359,
    "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    if(via != NULL)
    {
        readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
        struct viagem *via = get_v_p2(*viagens,p2_i,cont);
        if(via != NULL)
        {
            printf("Insira a matricula");
            gets(matricula_i);
            struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
            if(via != NULL)
            { 
                printf("Data %d\n",via->data);
                printf("Portico de entrada %d\n",via->p1);
                printf("Portico de saida %d\n",via->p2);
                printf("Matricula do veiculo %s\n",
                        via->clientes.veiculos.matricula);    
            }
        else printf("Nao existem viagens com a matricula inserida");
        }
        else printf("Nao existem viagens na portagem de saida inserida");
    }
    else printf("Nao existem viagens na data inserida");
}


void opcao_14(struct cliente **clientes,struct viagem **viagens,int cont){
    int p1_i,p2_i;
    char matricula_i[7];
    readInt(&p1_i,0,4,
    "Insira a portagem de entrada que procura\n");
    struct viagem *via = get_v_p1(*viagens,p1_i,cont);
    if(via != NULL)
    {
        readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
        struct viagem *via = get_v_p2(*viagens,p2_i,cont);
        if(via != NULL)
        {
            printf("Insira a matricula");
            gets(matricula_i);
            struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
            if(via != NULL)
            { 
                printf("Data %d\n",via->data);
                printf("Portico de entrada %d\n",via->p1);
                printf("Portico de saida %d\n",via->p2);
                printf("Matricula do veiculo %s\n",
                        via->clientes.veiculos.matricula);    
            }
        else printf("Nao existem viagens com a matricula inserida");
        }
        else printf("Nao existem viagens na portagem de saida inserida");
    }
    else printf("Nao existem viagens na portagem de entrada inserida");
}

void opcao_15(struct cliente **clientes,struct viagem **viagens,int cont){
    int data_i,p1_i,p2_i;
    char matricula_i[7];
    readInt(&data_i,1000000000,1912312359,
            "Insira a data da(s) viagem(ns) que procura (AAMMDDHHMM)\n");
    struct viagem *via = get_v_data(*viagens,data_i,cont);
    if(via != NULL)
    {
        readInt(&p1_i,0,4,"Insira a portagem de entrada que procura\n");
        struct viagem *via = get_v_p1(*viagens,p1_i,cont);
        if(via != NULL)
        { 
            readInt(&p2_i,0,4,"Insira a portagem de saida que procura\n");
            struct viagem *via = get_v_p2(*viagens,p2_i,cont);
            if(via != NULL)
            { 
                printf("Insira a matricula");
                gets(matricula_i);
                struct viagem *via = get_v_matricula(*viagens,matricula_i,cont);
                if(via != NULL)
                { 
                    printf("Data %d\n",via->data);
                    printf("Portico de entrada %d\n",via->p1);
                    printf("Portico de saida %d\n",via->p2);
                    printf("Matricula do veiculo %s\n",
                            via->clientes.veiculos.matricula);    
                }
                else printf("Nao existem viagens com a matricula inserida");
            }
            else printf("Nao existem viagens na portagem de saida inserida");
        }
        else printf("Nao existem viagens na portagem de entrada inserida");
    }
    else printf("Nao existem viagens na data inserida");
}

/**
 * Funçao onde está inserido a pesquisa das viagens
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_p Nif do cliente que ira ser usado na pesquisa
*/

void Pesquisa_viagens(struct cliente **clientes,struct viagem **viagens,
        int cont,int len)
{
    int nif_s_v,pos,escolha_v_3;
    
    char matricula[MAX_CARAC];
    
    do{
        printf("\n1-Pesquisar por data\n");
        printf("2-Pesquisar por portagem de entrada\n");
        printf("3-Pesquisar por portagem de saida\n");
        printf("4-Pesquisar por matricula\n");
        printf("5-Pesquisar por data e portagem de entrada\n");
        printf("6-Pesquisar por data e portagem de saida\n");
        printf("7-Pesquisar por data e matricula\n");
        printf("8-Pesquisar por portagem de entrada e portagem de saida\n");
        printf("9-Pesquisar por portagem de entrada e matricula\n");
        printf("10-Pesquisar por portagem de saida e matricula\n");
        printf("11-Pesquisar por data, portagem de entrada e portagem e saida\n");
        printf("12-Pesquisar por data, portagem de entrada e matricula\n");
        printf("13-Pesquisar por data, portagem de saida e matricula\n");
        printf("14-Pesquisar por portagem de entrada,protagem de saida "
                "e matricula\n");
        printf("15-Pesquisar por data, portagem de entrada, "
                "portagem de saida e matricula\n");
        printf("0-Voltar\n");
        readInt(&escolha_v_3,0,15,"");
        
        switch(escolha_v_3){
            case 1:opcao_1(clientes,viagens,cont);
            break;
            case 2:opcao_2(clientes,viagens,cont);
            break;
            case 3:opcao_3(clientes,viagens,cont);
            break;
            case 4:opcao_4(clientes,viagens,cont);
            break;
            case 5:opcao_5(clientes,viagens,cont);
            break;
            case 6:opcao_6(clientes,viagens,cont);
            break;
            case 7:opcao_7(clientes,viagens,cont);
            break;
            case 8:opcao_8(clientes,viagens,cont);
            break;
            case 9:opcao_9(clientes,viagens,cont);
            break;
            case 10:opcao_10(clientes,viagens,cont);
            break;
            case 11:opcao_11(clientes,viagens,cont);
            break;
            case 12:opcao_12(clientes,viagens,cont);
            break;
            case 13:opcao_13(clientes,viagens,cont);
            break;
            case 14:opcao_14(clientes,viagens,cont);
            break;
            case 15:opcao_15(clientes,viagens,cont);
            break;
            case 0:printf("Voltou\n");
            break;
        }
    }while(escolha_v_3 != 0);
}

void Gestaodeviagens(struct viagem **viagens,struct cliente **clientes,
        int *cont,int *len)
{
  int escolha_v_1,i,j;
    do{
        printf("1-Adicionar viagem\n");
        printf("2-Pesquisa de viagens\n");
        printf("0-Voltar para o menu principal\n");        
        readInt(&escolha_v_1,0,2,"");
        
        switch(escolha_v_1)
        {
            case 1: Adicionar_viagem(viagens,clientes,cont);
            break;
            case 2: Pesquisa_viagens(clientes,viagens,*cont,len);
            break;
            case 0:("MENU\n");
            break;
        }
    } while(escolha_v_1 != 0);
}