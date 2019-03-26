/**
 * @file Estruturas_gerais.c
 * @author Paulo Gonçalves
 * @author Vítor Sousa
 * @author José Ferreira
 * @date 1 Janeiro 2019
 * @brief Ficheiro onde se encontra as estruturas gerais
 */

#define MAX_CARAC 40
#define MAX 20

struct veiculo{
    char matricula[MAX];
    char modelo[MAX];
    char marca[MAX];
};

struct cliente{
    char nome[MAX_CARAC];
    int NIF;
    int CC;
    int NIB;
    char morada[MAX_CARAC];
    int n_pontos_vv;
    struct veiculo veiculos;
};

struct portico{
    
};



