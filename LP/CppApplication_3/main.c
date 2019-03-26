/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo
 *
 * Created on 28 de Dezembro de 2018, 15:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numArray[21];
    int i = 0;
    int num = 0;

    while( scanf("%d", &num) > 0 && i < 21 && num >0) {
    numArray[i] = num;
    i++;
    }

}

