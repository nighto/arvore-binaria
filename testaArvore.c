#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "arvore_binaria.c"
#define TAMANHO_ARRAY 10

int main(void){
	char a[TAMANHO_ARRAY] = {'g','d','i','b','f','h','j','a','c','e'};
	ARVORE_B raiz;

	raiz = criaArvore(a, 0, TAMANHO_ARRAY);

	printf("Imprimindo em pré-ordem:\n");
	preOrdem(raiz);
	printf("\n\n");

	printf("Imprimindo em ordem:\n");
	emOrdem(raiz);
	printf("\n\n");

	printf("Imprimindo em pós-ordem:\n");
	posOrdem(raiz);
	printf("\n\n");
}
