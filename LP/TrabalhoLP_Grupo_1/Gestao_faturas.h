/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestao_faturas.h
 * Author: Paulo
 *
 * Created on 4 de Janeiro de 2019, 11:32
 */

#ifndef GESTAO_FATURAS_H
#define GESTAO_FATURAS_H
#include "Estruturas_gerais.h"

#ifdef __cplusplus
extern "C" {
#endif


void Gestaodefaturas(struct fatura**,struct viagem**,
        struct cliente**,int*,int*);


#ifdef __cplusplus
}
#endif

#endif /* GESTAO_FATURAS_H */

