#include <stdio.h>
#include <stdlib.h>

void main() {
    int pn,sn;
    printf("insira dois numeros:");
    scanf("%d %d", &pn, &sn);    
    printf("A soma é %d \n", somar(pn, sn));
    printf("A subtração é %d \n", sub(pn, sn));
    printf("A multiplicação é %d \n", mult(pn, sn));
    
    float b = (float)pn;
    float c = (float)sn;
    float divi;                                         //divisão
    divi = b / c;
    printf("A divisão é %.2f \n", divi);
    }
int somar(int pn, int sn){
    return pn + sn;                                
}

int mult(int pn, int sn){
    return pn * sn;
}

int sub(int pn, int sn){
    return pn - sn;
}

//float divi(float b, float c){
  //return b / c;                                teste para mudar o resultado para float de dois int
//}