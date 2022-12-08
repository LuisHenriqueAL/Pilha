#include "pilha_e.h"

Pilha2 pilha;

void cria_pilha2(){
  pilha.tam = 0;
  printf("Pilha criada\n");
}

void inserir2(int n){
  pilha.num[pilha.tam] = n;
  pilha.tam++;
  printf("\nValor inserido");
}

int remover2(){
  pilha.tam--;
  return pilha.num[pilha.tam];
  printf("\nValor removido");
}

void imprime_pilha2(){ 
  // percorre a pilha imprimindo cada valor
   for (int i = pilha.tam - 1; i >= 0; i--){
    if(i == pilha.tam){
      printf("O topo da pilha é: %d", pilha.num[pilha.tam]);
    }else{
     printf("\n%d", pilha.num[i]);
    }
  }
}

void vazia2(){
  if (pilha.tam == 0){
    printf("\nPilha vazia!");
  }else{
    printf("\nA pilha não está vazia");
  }
}

int tamanho2(){
  printf("\nO tamanho da pilha é: %d", pilha.tam);
  return 0;
}