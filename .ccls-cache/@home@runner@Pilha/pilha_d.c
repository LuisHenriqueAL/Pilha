#include "pilha_d.h"

Elemento *aux;

// Cria pilha vazia (NULL)
Pilha* cria_pilha(){
  
  Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
  if(pi != NULL){
    pi->topo = NULL;
    pi->tam = 0;
  }

  return pi;
}

// Inserção de elemento - topo da pilha
void insere_elemento(Pilha *pi){

	Elemento *novo =(Elemento*) malloc(sizeof(Elemento));
	printf("\nDigite o numero a ser inserido na pilha: ");
	scanf("%d",&novo->num);
	
	novo->prox = pi->topo;
	pi->topo = novo;
  pi->tam += 1;
	printf("\nNumero inserido na pilha!");
}

// Exibe os elementos da pilha (tanto do topo quanto os restantes)
void consulta_pilha(Pilha *pi){
	// Verificador se a pilha está vazia
	if(pi->topo == NULL){
		printf("\nPilha Vazia!!");
	}else{
		aux = pi->topo;
    printf("\nTopo da pilha: %d", aux->num);
		do{
			printf("\n%d", aux->num);
			aux = aux->prox;
		} while(aux != NULL);
	}
}

// Remove o elemento do topo da pilha
void remove_elemento_pilha(Pilha *pi){
	// Verificador se a pilha está vazia 
  if(pi->topo ==  NULL){
		printf("\nPilha Vazia!");
	} else{
		aux = pi->topo;
		printf("\n%d removido!", pi->topo->num);
		pi->topo = pi->topo->prox;
		free(aux);
	}
}

// Verificar se a pilha está vazia
void vazia(Pilha *pi){
  // Verificador se a pilha está vazia 
  if(pi->topo ==  NULL){
		printf("\nPilha Vazia!");
  }else{
    printf("\n A pilha não está vazia.");
  }
}

// Verificar o tamanho da pilha
void tamanho(Pilha *pi){
  // Verificador se a pilha está vazia 
  if(pi->topo ==  NULL){
		printf("\nPilha Vazia!\n");
  }else{
    printf("\nO tamanho da pilha é: %d\n", pi->tam);
  }
}