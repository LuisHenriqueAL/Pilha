#include <stdio.h>
#include "pilha_d.h"
#include "pilha_e.h"

int main(void) {
  int a;
  Pilha *pi;
  Pilha2 pilha;

  printf("1 para pilha dinâmica, 2 para pilha estática: ");
  scanf("%d", &a);

  switch(a){

  case 1:

  // Cria a lista
  pi = cria_pilha();

  // Verifica se a lista está vazia
  vazia(pi);

  // Insere o valor 20 no topo da pilha e exibe o tamanho
  insere_elemento(pi);
  tamanho(pi);
  // Insere o valor 30 no topo da pilha e exibe o tamanho
  insere_elemento(pi);
  tamanho(pi);
  // Insere o valor 40 no topo da pilha e exibe o tamanho
  insere_elemento(pi);
  tamanho(pi);
  // Insere o valor 50 no topo da pilha e exibe o tamanho
  insere_elemento(pi);
  tamanho(pi);
  // Insere o valor 60 no topo da pilha e exibe o tamanho
  insere_elemento(pi);
  tamanho(pi);

  // Exibe a lista na tela
  consulta_pilha(pi);
  printf("\n");
  
  // Remove o elemento do topo
  remove_elemento_pilha(pi);
  // Exibe a pilha na tela
  consulta_pilha(pi);
  // Remove o elemento do topo
  remove_elemento_pilha(pi);
  // Exibe a pilha na tela
  consulta_pilha(pi);

  // Verifica se a pilha está vazia
  vazia(pi);
  
  case 2:
  cria_pilha2();
  vazia2();
  inserir2(3);
  tamanho2();
  inserir2(4);
  tamanho2();
  inserir2(5);  
  tamanho2();
  inserir2(6);
  tamanho2();
  imprime_pilha2();
  remover2();
  tamanho2();
  imprime_pilha2();
  remover2();
  tamanho2();
  imprime_pilha2();
  remover2();
  tamanho2();
  vazia2();    
  }

  return 0;
}