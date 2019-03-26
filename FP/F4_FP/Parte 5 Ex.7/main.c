/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 18 de Novembro de 2018, 18:32
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void linha_array(int array[MAX],char c){
    for (int j = 0; j < MAX; j++) {
        array[j] = c;
        printf("%s", array[j]);
    }
}
int main(int argc, char** argv) {
    int arr[4]={2,4,6,0};
    char g = '+';
    linha_array(arr,g);
}

