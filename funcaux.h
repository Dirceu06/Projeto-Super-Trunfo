#ifndef FUNCAUX_H
#define FUNCAUX_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_NOME_CARTA 21

typedef struct {
    char nome[TAM_NOME_CARTA];
    char letra;
    int num;
    int super_trunfo;
    int atributo_1;
    int atributo_2;
    int atributo_3;
    int atributo_4;
    int atributo_5;
} Cartas;

int sistema();
void burocracia(char nome[], int tamanho);
FILE* abrir_arquivo(const char nome_arq[], const char mode[]);
int quant_cartas(FILE* arquivo);

#endif
