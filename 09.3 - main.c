//
//  Laboratório 9 - Implementação Árvores AVL
//    - Apresentar a funcionalidade de inserção mantendo as restrições de AVL com as operações de rotação simples e dupla nos dois sentidos
//  
//  GILDO FERREIRA DIAS FILHO       - 201905451 - TURMA 'A'
//  LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - TURMA 'B'
//


#include <stdio.h>
#include <stdlib.h>
#include "AVL.h"

int main(){

  ArvAVL avl;
  cria_ArvAVL(&avl);
  int x[6],valor[6];
  valor[0]=10;
  valor[1]=8;
  valor[2]=15;
  valor[3]=4;
  valor[4]=9;
  valor[5]=12;
  x[0]=insere_ArvAVL(&avl,valor[0]);
  x[1]=insere_ArvAVL(&avl,valor[1]);
  x[2]=insere_ArvAVL(&avl,valor[2]);
  x[3]=insere_ArvAVL(&avl,valor[3]);
  x[4]=insere_ArvAVL(&avl,valor[4]);
  x[5]=insere_ArvAVL(&avl,valor[5]);
  printf("\nPRE-ORDEM:\n");
  preOrdem_ArvAVL(avl);
  printf("\nEM-ORDEM:\n");
  emOrdem_ArvAVL(avl);
  printf("\nPOS-ORDEM:\n");
  posOrdem_ArvAVL(avl);
  
  /*cria_ArvAVL(ArvAVL *raiz);
void libera_ArvAVL(ArvAVL *raiz);
void libera_NO(ArvAVL no);
int fatorBalanceamento_NO(ArvAVL no);
int maior(int x, int y);
int insere_ArvAVL(ArvAVL *raiz, int data, double *p_contI);
int remove_ArvAVL(ArvAVL *raiz, int valor, double *p_contR);
int estaVazia_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int consulta_ArvAVL(ArvAVL *raiz, int valor, double *p_contC);
int consultaComCiclos_ArvAVL(ArvAVL *raiz, int valor, int *NumCiclos);
void preOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_ArvAVL(ArvAVL *raiz);
void posOrdem_ArvAVL(ArvAVL *raiz);
void RotacaoLL(ArvAVL *A);
void RotacaoRR(ArvAVL *A);
void RotacaoLR(ArvAVL *A);
void RotacaoRL(ArvAVL *A);
int procuraMenor(ArvAVL atual);*/
}