/**
 * @file Menu.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra o menu principal
 */

#include "Menu.h"

/**
 * Funçao onde está inserido o menu principal
 * 
 * @param clientes Estrutura de clientes
 * @param clientes Estrutura de viagens
 * @param clientes Estrutura de faturas
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_p Nif do cliente que ira ser usado na pesquisa
*/

void menu(struct cliente **clientes, struct viagem **viagens,
        struct fatura **faturas, int *cont, int *len,int *NIF_p)
{
    int num_func;
    do{
        printf("*******Bem-vindo********\n");
        printf("1-Gestao de utilizadores\n");
        printf("2-Gestao de Viagens\n");
        printf("3-Gestao de precarios\n");
        printf("4-Gestao de faturas\n");
        printf("5-Persistencia de dados\n");
        printf("0-Sair\n");
        readInt(&num_func,0,5,"");
        
        switch(num_func)
        {
            case 1: Gestaodeutilizadores(clientes,cont,len,NIF_p);
            break;
            case 2: Gestaodeviagens(viagens,clientes,cont,len);  
            break;
            case 3: Gestao_precos(viagens,cont,len);
            break;
            case 4: Gestaodefaturas(faturas,viagens,clientes,cont,len,NIF_p);
            break;
            case 5: Persistenciadedados(clientes,cont,len);
            break;
            case 0: printf("\n Adeus\n");
            break;
        }
    }while(num_func!=0);
}

