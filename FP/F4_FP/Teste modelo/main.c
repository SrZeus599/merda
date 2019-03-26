/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 19 de Novembro de 2018, 14:36
 */

#include <stdio.h>
#include <stdlib.h>

int fibonaci(int n){
    int res,ant1=0,ant2=1,temp;
    if(n<1)
        res=-1;
    else if(n==1)
        res=0;
    else if(n==2)
        res=1;
    else{
        while(n>2){
                temp=ant1+ant2;
                ant1=ant2;
                ant2=temp;
                n--;              
            
        }
    }
    return res;

}

int main(int argc, char** argv) {
    int num=8;
    fibonaci(num);
    printf("%d",fibonaci);
}

