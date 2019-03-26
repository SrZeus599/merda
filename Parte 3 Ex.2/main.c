/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: José Pedro
 *
 * Created on 29 de Novembro de 2018, 10:16
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv, void) {
    
    const size_t N = 100;
    char str[N];
    const char example = "canarinho"

    snprintf(str, sizeof(str), "%s", example);

    printf("String = %s ", str);

    return 0;
}

