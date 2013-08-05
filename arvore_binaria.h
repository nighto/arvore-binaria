typedef char DADO;

struct no {
	DADO d;
	struct no *esq;
	struct no *dir;
};

typedef struct no NO;
typedef NO *ARVORE_B;

ARVORE_B novoNo(void);
ARVORE_B iniciaNo(DADO d, ARVORE_B p1, ARVORE_B p2);
ARVORE_B criaArvore(DADO a[], int i, int tamanho);
void preOrdem(ARVORE_B raiz);
void emOrdem(ARVORE_B raiz);
void posOrdem(ARVORE_B raiz);

