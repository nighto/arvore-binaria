#include <stdio.h>
#include <stdlib.h>
#include "arvore_b.h"

ARVORE_B novoNo(){
	return ((ARVORE_B)malloc(sizeof(NO)));
}

ARVORE_B iniciaNo(DADO d1, ARVORE_B p1, ARVORE_B p2){
	ARVORE_B t;

	t = novoNo();
	t->d = d1;
	t->esq = p1;
	t->dir = p2;
	return t;
}

ARVORE_B criaArvore(DADO a[], int i, int tamanho){
	if(i >= tamanho){
		return NULL;
	}else{
		return(
			iniciaNo(
				a[i],
				criaArvore(a, 2*i+1, tamanho),
				criaArvore(a, 2*i+2, tamanho)
			)
		);
	}
}

void preOrdem(ARVORE_B raiz){
	if(raiz != NULL){
		printf("%c ", raiz->d);
		preOrdem(raiz -> esq);
		preOrdem(raiz -> dir);
	}
}

void emOrdem(ARVORE_B raiz){
	if(raiz != NULL){
		emOrdem(raiz -> esq);
		printf("%c ", raiz->d);
		emOrdem(raiz -> dir);
	}
}

void posOrdem(ARVORE_B raiz){
	if(raiz != NULL){
		posOrdem(raiz -> esq);
		posOrdem(raiz -> dir);
		printf("%c ", raiz->d);
	}
}

