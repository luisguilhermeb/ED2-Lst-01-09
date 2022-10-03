#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
  int info;
  int altura;
  struct NO *esq,*dir;
}NO;

typedef struct NO *ArvAVL;

void cria_ArvAVL(ArvAVL *raiz);
void libera_ArvAVL(ArvAVL *raiz);
void libera_NO(ArvAVL no);
int fatorBalanceamento_NO(ArvAVL no);
int maior(int x, int y);
int insere_ArvAVL(ArvAVL *raiz, int valor);
int remove_ArvAVL(ArvAVL *raiz, int valor);
int estaVazia_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
int altura_NO(ArvAVL raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int consulta_ArvAVL(ArvAVL *raiz, int valor);
int consultaComCiclos_ArvAVL(ArvAVL *raiz, int valor, int *NumCiclos);
void preOrdem_ArvAVL(ArvAVL raiz);
void emOrdem_ArvAVL(ArvAVL raiz);
void posOrdem_ArvAVL(ArvAVL raiz);
void RotacaoLL(ArvAVL *A);
void RotacaoRR(ArvAVL *A);
void RotacaoLR(ArvAVL *A);
void RotacaoRL(ArvAVL *A);
int procuraMenor(ArvAVL atual);


