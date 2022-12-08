#ifndef PILHA_D_H_PILHA_D_
#define PILHA_D_H_PILHA_D_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Struct para os elementos da pilha
struct Elemento{
	int num;
	struct Elemento *prox;
};
typedef struct Elemento Elemento;

// Struct para controlar os elementos da pilha
struct Pilha{
  int tam;
  struct Elemento *topo;
};
typedef struct Pilha Pilha;

// Variável auxiliar para manipulação dos elementos da pilha


// Declaração de funções
Pilha* cria_pilha();
void insere_elemento(Pilha *pi);
void consulta_pilha(Pilha *pi);
void remove_elemento_pilha(Pilha *pi);
void vazia(Pilha *pi);
void tamanho(Pilha *pi);

#endif