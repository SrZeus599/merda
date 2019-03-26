#include <stdio.h>
#include <stdlib.h>
#define TAM_STR 20
#define TAM_INICIAL 3
#define TAM_DECREMENTO 3
#define TAM_INCREMENTO 3

struct Nota{
    char nome_UC[TAM_STR];
    int nota;
};

struct Aluno{
    char nome[TAM_STR];
    int id;
    char util[TAM_STR];
    char pass[TAM_STR];
    int num_notas;
    struct Nota notas[10];
};
int alocaInicial (struct Aluno** alunos,int* tam_max){
    int res = 1;
    *alunos = (struct Aluno*) malloc(TAM_INICIAL*sizeof(struct Aluno));
    
    if (*alunos == NULL) {
        printf("")
    }
}
int main(int argc, char** argv) {
    struct Aluno *alunos;
    int quantos = 0;
    int tam_max = 0;
    
    alunos = (struct Aluno*)  malloc(TAM_INICIAL*sizeof(struct Aluno));
    
    if (alunos == NULL)
        printf("Erro ao alocar memória!\n");
    else {
        tam_max = TAM_INICIAL;
        
        free(alunos);
    }
        

    return (EXIT_SUCCESS);
}

