#include "Utils.h"

int main() {
    
    struct lanco matriz[NUM_PORTAGENS][NUM_PORTAGENS];
    
    preencheMatriz((struct lanco*) matriz, "Distancias.txt", true);
    preencheMatriz((struct lanco*) matriz, "Precos.txt", false);
    
    
    //imprimir conteúdos lidos de ficheiro, conjuntamente
    int i, j;
    for (i=0;i<NUM_PORTAGENS;i++){
        for (j=0;j<NUM_PORTAGENS;j++){
            printf("%f - %f\t", matriz[i][j].dist, matriz[i][j].preco);
        }
        printf("\n");
    }
        
    return EXIT_SUCCESS;
}

