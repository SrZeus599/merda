/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 23 de Outubro de 2018, 9:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int a = 3, res = 0;
    switch (a) {
        case 1: res = 0;
                break;
        case 2: res = 1;
                break;
        case 3: res = 0;
                break;       
        case 4: res = 2;
                break;
        default: res = 0;  
    }
    
    return (EXIT_SUCCESS);
}

