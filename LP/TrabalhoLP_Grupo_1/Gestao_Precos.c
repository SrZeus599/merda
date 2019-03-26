/**
 * @file Gestao_Precos.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra a gestão de preços
 */
#include "Gestao_precos.h"

/**
 * Funçoes onde se altera os preços
 * 
 * @param clientes Estrutura de viagens
 * @param cont contador
*/

void altera_precos(struct viagem **viagens,int cont){
    int pe,ps;
    float valor_p;
    int tam_max=0;
    struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
    readInt(&pe,0,4,"Insira a portagem de entrada");
    readInt(&ps,0,4,"Insira a portagem de saida");
    
    if(pe != ps){
        readFloat(&valor_p,1,100,"Insira o preco que pretende colocar neste trajeto:\n");
        //matriz[pe * NUM_PORTAGENS + ps].preco=valor_p;
/*
            FILE *fp = fopen("preco.txt","w");
            if ( fp != NULL )
            {
                
            }   
*/
            //imprimir conteúdos lidos de ficheiro, conjuntamente
        preencheMatriz((struct lanco*) matriz, "Precos.txt", false);
        matriz[pe][ps].preco=valor_p;
        int i, j;
        for (i=0;i<NUM_PORTAGENS;i++){
            for (j=0;j<NUM_PORTAGENS;j++){
                printf("%.f\t", matriz[i][j].preco);
            }
            printf("\n");
        }
    }else printf("As portagens nao podem ser as mesmas!\n");    
}
               
/*
        printf("Precos alterados:\n");

                printf("\nO preco a pagar entre o portico %d e %d: %.1f\n",
                        pe,ps,matriz[pe * NUM_PORTAGENS + ps].preco);
*/

/**
 * Função onde se gere os preços
 * 
 * @param clientes Estrutura de viagens
 * @param cont contador
 * @param len tamanho maximo do array

*/

void Gestao_precos(struct viagem **viagens,int *cont,int *len)
{
    int i,j,pos;
    int escolha_ap_1;
    do{
        printf("\n1-Alterar precos\n");
        printf("0-Voltar ao menu principal\n");
        readInt(&escolha_ap_1,0,1,"");
        
        switch (escolha_ap_1){
            case 1:altera_precos(viagens,cont);
            break;
            case 2:printf("\n");
            break;
        }
    }while(escolha_ap_1 !=0);
}

/*

printf("Selecione a posicao do valor.\n");
readInt(&pos,1,25,"-> ");
readFloat(&valor,0,100,"Que valor pretende inserir?\n");

for(i=1;i<=25;i++){
    for(j=1;j<=25;j++){ 
        printf("%0.1f",matriz[i][j]);
        teste[pos]->preco_2=matriz[i][j].preco;
        pos++;

        }
    }
*/
