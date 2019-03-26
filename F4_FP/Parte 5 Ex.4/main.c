/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 5 de Novembro de 2018, 15:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

struct Ponto2D {
    float x, y;
};
float somadistancias (struct Ponto2D arraypontos[], int tam) {
int x1, x2, y1, y2, i;
    for (i=0;i<tam-1;i++) {
        x1 = arraypontos[i].x;
        y1 = arraypontos[i].y;
        x2 = arraypontos[i+1].x;
        y2 = arraypontos[i+1].y;
    }
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
   
int main(int argc, char** argv) {
    struct Ponto2D array[MAX];
    
    somadistancias(array, 4);
    printf("%f",somadistancias);

    
}



