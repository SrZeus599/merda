/**
 * @file Persistencia_Dados.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde é possível realizar a persistencia de dados
 */
#include "Persistencia_Dados.h"

/**
 * Função onde escreve os dados
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 
*/

void escreverdados(struct cliente *clientes,int cont)
{
    FILE *f;
    
    if((f = fopen("ficheiro.bin","wb")) == NULL)
        perror(NULL);
    else{
        fwrite(&cont,sizeof(int),2,f);
        fwrite(clientes, sizeof(struct cliente),cont,f);
        fclose(f);
    }
    
}

/**
 * Função onde se lê os dados
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array

*/

void lerdados(struct cliente **clientes,int *cont,int *len){
    FILE *f;
    int nr;
    if((f = fopen("ficheiro.bin","rb"))==NULL)
    {
        *cont=0;
        *len=0;
        perror(NULL);
    }
    else
    {
        nr =fread(cont, sizeof(int),1,f);
        
        if (nr != 1){
            printf("Erro ao ler o numero de elementos!\n");
            return;
        }
        *clientes = malloc((*cont)*sizeof(struct cliente));
        
        if(clientes == NULL)
        {
            printf("Impossivel alocar memoria");
            *cont=0;
            *len=0;
        }
        else
        {
            printf("Alocou %d bytes de memoria.\n",
                    (*cont)*sizeof(struct cliente));
            nr=fread(*clientes,sizeof(struct cliente),*cont,f);
        
            if(nr==*cont){
                *len=*cont;
                 *cont=nr;
            }
            else{
                printf("Erro ao ler elementos!\n");
                *len=0;
                *cont=0;
                free(*clientes);
            }
        }
        fclose(f);
    }
}

/**
 * Função onde se encontra a persistência de dados
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array 
*/

void Persistenciadedados(struct cliente **clientes,int *cont,int *len){
    int escolha_p_d_1;
    do{
        printf("\n1-Escrever dados\n");
        printf("2-Ler dados\n");
        printf("0-Voltar ao menu principal");
        readInt(&escolha_p_d_1,0,2,"");
        
        switch(escolha_p_d_1){
            case 1:escreverdados(*clientes,*cont);
            break;
            case 2:lerdados(clientes,cont,len);
            break;
        }
    }while(escolha_p_d_1 != 0);
}