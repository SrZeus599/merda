/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Paulo Gonçalves
 *
 * Created on 30 de Outubro de 2018, 16:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a1,a2,a3,b1,b2,b3,c1,c2,c3;
    printf("Insira a nota dos 3 alunos no 1º momento de avaliação\n");   //a2 = aluno 2 nota 1
    scanf("%f %f %f",&a1,&a2,&a3); 
    printf("Insira a nota dos 3 alunos no 2º momento de avaliação\n");
    scanf("%f %f %f",&b1,&b2,&b3);
    float array1[3]={a1, a2, a3};
    float array2[3]={b1, b2, b3};
    float array3[3]={c1, c2, c3};
    c1 = (a1 + b1) / 2;
    c2 = (a2 + b2) / 2;
    c3 = (a3 + b3) / 2;
    array3[3] = (c1,c2,c3);
    
    if(c1 < 9.5 || c1 < 0)
    printf("-1");
    else printf("A nota final do aluno 1 foi:%0.3f",c1);
           
        
    if(c2 < 9.5 || c2 > 20)
    printf("\n-1");
    else printf("\nA nota final do aluno 2 foi:%0.3f",c2);
            
        
    if(c3 < 9.5 || c3 > 20)
    printf("\n-1");
    else printf("\nA nota final do aluno 3 foi:%0.3f",c3);
    printf("\n");
    
    
   // if(c2 < 9.5 || c2 > 20)
  //  float matriz3[3]=(-1,c2,c3);
    
            
            
    
    
}
    
  
   

    
   
 

    


