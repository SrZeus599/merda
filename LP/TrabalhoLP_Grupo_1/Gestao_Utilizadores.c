/**
 * @file Gestao_Utilizadores.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra a gestão de utilizadores
 */

#include "Gestao_Utilizadores.h"
#define TAM_INCREMENTO 3
#define TAM_DECREMENTO 3
#define TAM_STR 20
#define TAM_CARAC 50

/**
 * Função onde se insere as variaveis depois de detetado o NIF do cliente
 * 
 * @param clientes Estrutura de clientes
 * @param pos posiçao do cliente no array
 * @param NIF_f Nif do cliente que ira ser usado 
*/

void leCliente(struct cliente *clientes,int NIF_p,int *pos){    
    int tam=21,i=0;
    int NIB_p[MAX];
    char matricula_p[6];
    
    clientes[*pos].NIF=NIF_p;
    
    readString(&clientes[*pos].nome,TAM_CARAC,"Digite o nome do cliente:\n");

    readInt(&clientes[*pos].CC,10000000,99999999,
            ("Digite o numero do CC do cliente:\n"));
    
    readString(&clientes[*pos].morada,TAM_CARAC,"Digite a morada do cliente:\n");
    
    readInt(&clientes[*pos].n_pontos_vv,0000,9999,
            ("Digite o numero de pontos da Via Verde do cliente:\n"));
    
    readString(&clientes[*pos].veiculos.matricula,7,
            ("Digite a matricula do veiculo do cliente:\n"));
    
    readString(&clientes[*pos].veiculos.marca,TAM_CARAC,
            ("Digite a marca do veiculo do cliente:\n"));
    
    readString(&clientes[*pos].veiculos.modelo,TAM_CARAC,
            ("Digite a modelo do veiculo do cliente:\n"));
    
    *NIB_p =(int*) malloc(tam * sizeof(int)); //aloca memoria para o NIB
    
    printf("Escreva o NIB do Cliente");
    for (int i = 0; i < 21; i++) 
    { 
        scanf("%1d", &NIB_p[i]);    
        //%1d le so um digito e associa-o ao elemento do array
        clientes[*pos].NIB[i]=NIB_p[i];   
    } 
    
    (*pos)++;
}

/**
 * Função onde se pesquisa pelo cliente
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param NIF_p Nif do cliente que ira ser usado 
*/

int Pesquisa(struct cliente *clientes,int NIF_p, int cont)
{
    int i=0;
    while(i < cont && clientes[i].NIF != NIF_p)
        i++;
    if(i == cont)
        return -1;
    else 
        return i;
}

/**
 * Função onde se cria o utilizador
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array
*/

void Criar_utilizador(struct cliente **clientes,int *cont, int *len)
{
    int pos,NIF_p;
    char nome_p[MAX];
    struct cliente *novo;
    
    readInt(&NIF_p,100000000,999999999,"Digite o NIF do cliente\n");
    pos=Pesquisa(*clientes,NIF_p,*cont);

    if (pos == -1)
    {
         if(*cont == *len){
            novo = realloc(*clientes,
                    ((*cont)+TAM_INCREMENTO)*sizeof(struct cliente));
            if (novo == NULL)
                printf("Realocacao de memoria falhou, cliente nao adicionado.\n");
            else
            {
                printf("Realocou memoria. Novo tamanho : %d bytes",
                        ((*cont)+TAM_INCREMENTO) * sizeof(struct cliente));
                *clientes = novo;
                (*len) += TAM_INCREMENTO;
                leCliente(*clientes, NIF_p, cont);
            }
        }else{
           leCliente(*clientes, NIF_p, cont);
        }
    } else
        printf("Cliente ja existe");
}

struct cliente *getCliente(struct cliente *clientes,int nif, int cont)
{
    int pos = Pesquisa(clientes,nif,cont);
    
    if(pos == -1)
        return NULL;
    else
        return &clientes[pos];
}

/**
 * Função onde se edita as variaveis do cliente
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param NIF_p Nif do cliente que ira ser usado 
*/

void Editar_utilizador(struct cliente *clientes,int NIF_p,int cont)
{
    int escolha_2;
    int nif,pos;
    int tam=21;
    int NIB_e[MAX];
    readInt(&nif,100000000,999999999,
    "Digite o Nif do cliente que pretende editar");
    struct cliente *cli = getCliente(clientes,nif,cont);
    if(cli != NULL){
        do{
        printf("1-Editar NIF do cliente\n");
        printf("2-Editar nome do cliente\n");
        printf("3-Editar numero do CC do cliente\n");
        printf("4-Editar morada do cliente\n");
        printf("5-Editar numero de pontos VV do cliente\n");
        printf("6-Editar matricula do cliente\n");
        printf("7-Editar marca do cliente\n");
        printf("8-Editar modelo do cliente\n");
        printf("9-Editar NIB do cliente\n");
        printf("0-Voltar para o menu principal\n");        
        readInt(&escolha_2,0,9,"");
        
        switch(escolha_2){
            case 1:printf("\nNIF atual: %d\n",cli->NIF);
            readInt(&cli->NIF,100000000,999999999,"Novo NIF");
            break;
            case 2:printf("\nNome atual: %s\n",cli->nome);
                readString(cli->nome,(TAM_STR - 1),"Novo nome: ");
            break;
            case 3:printf("\nNumero CC atual: %d\n",clientes->CC);
                readInt(&cli->CC,10000000,99999999,"Novo numero de CC: ");
            break;
            case 4:printf("\nMorada atual: %s\n",clientes->morada);
                readString(cli->morada,(TAM_STR - 1),"Nova morada: ");
            break;
            case 5:printf("\nNumero de pontos VV atual: %d\n",
                    clientes->n_pontos_vv);
                readInt(&cli->n_pontos_vv,0000,9999,"Novo numero de pontos VV: ");
            break;
            case 6:printf("\nMatricula do veiculo atual: %s\n",
                    clientes->veiculos.matricula);
                readString(cli->veiculos.matricula,(TAM_STR - 1),"Nova matricula: ");
            break;
            case 7:printf("\nMarca do veiculo atual: %s\n",
                    clientes->veiculos.marca);
                readString(cli->veiculos.marca,(TAM_STR - 1),"Nova marca: ");
            break;
            case 8:printf("\nModelo do veiculo atual: %s\n",
                    clientes->veiculos.modelo);
                readString(cli->veiculos.modelo,(TAM_STR - 1),"Novo modelo: ");
            break;
            case 9:for(int i = 0; i < 21; i++) 
            {
                printf("%d ",clientes->NIB[i]);
            }
            *NIB_e =(int*) malloc(tam * sizeof(int)); //aloca memoria para o NIB
            printf("Novo NIB: ");
            for (int i = 0; i < 21; i++) 
            { 
                scanf("%1d", &NIB_e[i]);    
                //%1d le so um digito e associa-o ao elemento do array
                clientes->NIB[i]=NIB_e[i];   
            } 
            break;  
        }

        }while (escolha_2!=0);  //Continuar no menu de editar enquanto nao escrever 0
    }
    else 
            printf("\nNIF nao Registado\n");  
} 

/**
 * Função onde se remove o cliente
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_p Nif do cliente que ira ser usado 
*/    
    
void Remover_utilizador(struct cliente **clientes, int *cont, int *len,int NIF_p)
{
    struct cliente *novo;
    int pos;
    int nif_r;
    readInt(&nif_r,100000000,999999999,
    "Digite o Nif do cliente que pretende remover");
    pos = Pesquisa(*clientes, nif_r, cont);
    if(pos> -1){
        while(pos< (*cont) - 1){
            (*clientes)[pos] = (*clientes)[pos+1];
            pos++;
        }
        (*cont)--;
        printf("Aluno removido\n");
        
        if (*len - *cont >= TAM_DECREMENTO)
        {
            novo = realloc(*clientes,
                    ((*len) * sizeof(struct cliente)) -
                    TAM_DECREMENTO*sizeof(struct cliente));
            if (novo == NULL)
                printf("Realocacao de memoria falhou\n");
            else{
                printf("Realocou memoria.Novo tamanho: %d bytes\n",
                        ((*len) * sizeof(struct cliente)) - 
                        TAM_DECREMENTO*sizeof(struct cliente));
                *clientes = novo;
                (*len) -= TAM_DECREMENTO;
            }
        }
    }
    else
        printf("Aluno com NIF %d nao existe\n",NIF_p);
}

/**
 * Função onde se pesquisa o cliente
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_p Nif do cliente que ira ser usado 
*/

void Pesquisar_clientes(struct cliente **clientes,int NIF_p,int cont,int len)
{
   int nif_s,pos,escolha_3;
   readInt(&nif_s,100000000,999999999,
   "\nDigite o Nif do cliente que pretende vizualizar");
   struct cliente *cli = getCliente(*clientes,nif_s,cont);   

   if(cli != NULL)
   { //MOSTRA O CONTEUDO DO CLIENTE INSERIDO
       printf("\nNIF do cliente: %d\n",cli->NIF);
       printf("CC do cliente: %d\n",cli->CC);
       printf("Morada do cliente: %s\n",cli->morada);
       printf("Numero de pontos VV do cliente: %d\n",
               cli->n_pontos_vv);
       printf("Nome do cliente: %s\n",cli->nome);
       printf("Marca do veiculo do cliente %s\n",
               cli->veiculos.marca);
       printf("Matricula do veiculo do cliente%s\n",
               cli->veiculos.matricula);
       printf("Modelo do veiculo do cliente: %s\n",
               cli->veiculos.modelo);
       printf("NIB do cliente:");
       for (int i = 0; i < 21; i++) 
            { 
                printf("%d",cli->NIB[i]);    
            } 
       printf("\n");
   }
   else 
       printf("\nCliente com NIF inserido nao existe\n");
   
}

/**
 * Função onde se encontra a gestao de utilizadores
 * 
 * @param clientes Estrutura de clientes
 * @param cont contador
 * @param len tamanho maximo do array
 * @param NIF_p Nif do cliente que ira ser usado 
*/

void Gestaodeutilizadores(struct cliente **clientes,int *cont,int *len,int *NIF_p){

    int escolha_1;
    do{
        printf("1-Criar utilizador\n");
        printf("2-Editar utilizador\n");
        printf("3-Remover utilizador\n");
        printf("4-Pesquisar clientes\n");
        printf("0-Voltar para o menu principal\n");        
        readInt(&escolha_1,0,4,"");


        switch(escolha_1)
        {
            case 1: Criar_utilizador(clientes,cont,len);
            break;
            case 2: Editar_utilizador(*clientes,*NIF_p,*cont);
            break;
            case 3: Remover_utilizador(clientes,cont,len,*NIF_p);
            break;
            case 4: Pesquisar_clientes(clientes,*NIF_p,*cont,*len);
            break;
            case 0: printf("MENU\n");
            break;
            default: printf("Opçao nao disponivel\n");
            break; 
        }
    }
    while (escolha_1 != 0);         //permite voltar ao menu principal ao escrever 0

}