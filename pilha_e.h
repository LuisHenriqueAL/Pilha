#ifndef PILHA_E_H_PILHA_E_
#define PILHA_E_H_PILHA_E_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define tamMax 10

typedef struct{
  int tam;
  int num[tamMax];
} Pilha2;

void cria_pilha2();
void inserir2(int n);
int remover2();
void imprime_pilha2();
void vazia2();
int tamanho2();

#endif